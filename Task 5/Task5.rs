extern crate reqwest;
extern crate scraper;
// importation syntax 
use scraper::{Html, Selector};
#[tokio::main]
async fn main() {
    hn_headlines("https://www.worldometers.info/coronavirus/#countries").await;
     
    }
async fn hn_headlines(url: &str) {

   let  resp = reqwest::get(url).await.unwrap(); 
   assert!(resp.status().is_success());

   let body = resp.text().await.unwrap();
   // parses string of HTML as a document
   let fragment = Html::parse_document(&body);
   // parses based on a CSS selector
   let covid = Selector::parse(".row_continent+ .odd td:nth-child(7) , .row_continent+ .odd td:nth-child(5) , .row_continent+ .odd td:nth-child(2)").unwrap();

  
   for story in fragment.select(&stories) {
        // grab the headline text and place into a vector
        let covid_txt = story.text().collect::<Vec<_>>();
        println!("{:?}", story_txt);
    }
}
