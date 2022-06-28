#pragma once
#include <string>
using namespace std;


class Header {
    private: 
        char packet_version_numbre;
        char packet_type;
        char sec_hdr_flag;
        char apid;

        string* projet_en_cours; 
    public:
        Header();
        Header(string id, string nom, string prenom, string mail, string projet_en_cours, short niveau);
        ~Header();

        void set_packet_version_numbre(char packet);
        void set_packet_type(char packet_type);

};