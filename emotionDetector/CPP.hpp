//
//  CPP.h
//  emotionDetector
//
//  Created by James Bischoff  on 11/25/15.
//  Copyright (c) 2015 CS2024. All rights reserved.
//

#ifdef __cplus
#pragma once
//#include <iostream>
//#include <string>
#include <boost/network/protocol/http/client.hpp>

//using namespace boost::network::http;

class CPP{
public:
    CPP() {};
    std::string emote() {return "";};
};
#endif