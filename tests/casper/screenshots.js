var casper = require('casper').create();

var links = [
  'http://127.0.0.1:9002/',
  'http://127.0.0.1:9002/user',
  'http://127.0.0.1:9002/admin'
];

casper.start().each(links, function(self, link) {
  self.thenOpen(link, function() {
    console.log(this.captureBase64('png'));
    console.log(this.captureBase64('png'));
  });
});

casper.run();