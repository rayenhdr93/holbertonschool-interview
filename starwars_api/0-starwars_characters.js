#!/usr/bin/node

const request = require('request');
const url = `https://swapi-api.hbtn.io/api/films/${process.argv[2]}/`;
request(url, async function (error, response, body) {
    if (error) console.log(error);
  for (const character of JSON.parse(body).characters) {
    await new Promise((resolve, reject) => {
      request(character, function (error, response, body) {
        if (error) reject(new Error(error));
        console.log(JSON.parse(body).name);
        resolve();
      });
    });
  }
});
