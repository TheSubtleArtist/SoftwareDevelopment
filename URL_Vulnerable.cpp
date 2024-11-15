#include <iostream>
#include "string.h"
#include <curl/curl.h>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Enter a URL to visit" << endl;
    string url;
    // inputting a url with a port enable port scanning
    // open ports return information, closed ports do not.
    cin >> url;
    cout << "Visiting " << url << endl;
    CURL* curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl,CURLOPT_URL,url.c_str());
        curl_easy_setopt(curl,CURLOPT_ACCEPTTIMEOUT_MS,100);
        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            cout <<"Download successful" << endl;
        } else {
            cout << "Error " << res << endl;
        }
    }
    return 0;
}