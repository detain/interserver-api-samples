#include "DNSApi.h"

using namespace Tiny;



        Response<
            SuccessTextResponse
        >
        DNSApi::
        addDnsDomain(
            
            std::string domain
            , 
            
            std::string ip
            
        )
        {
            std::string url = basepath + "/dns"; //


            // Headers  | 

            // Query    | 

            // Form     | domain ip 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("domain",domain);
            addFormParam("ip",ip);




            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            String
        >
        DNSApi::
        addDnsRecord(
            
            std::string id
            , 
            
            std::string name
            , 
            
            DnsRecordType type
            , 
            
            std::string content
            , 
            
            int ttl
            , 
            
            int prio
            
        )
        {
            std::string url = basepath + "/dns/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | name type content ttl prio 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("name",name);
            addFormParam("type",type);
            addFormParam("content",content);
            addFormParam("ttl",ttl);
            addFormParam("prio",prio);


                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DNSApi::
        deleteDnsDomain(
            
            std::string id
            
        )
        {
            std::string url = basepath + "/dns/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DNSApi::
        deleteDnsRecord(
            
            int domainId
            , 
            
            int recordId
            
        )
        {
            std::string url = basepath + "/dns/{domainId}/{recordId}"; //domainId recordId 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_domainId("{");
                s_domainId.append("domainId");
                s_domainId.append("}");

                int pos = url.find(s_domainId);

                url.erase(pos, s_domainId.length());
                url.insert(pos, stringify(domainId));
                std::string s_recordId("{");
                s_recordId.append("recordId");
                s_recordId.append("}");

                int pos = url.find(s_recordId);

                url.erase(pos, s_recordId.length());
                url.insert(pos, stringify(recordId));


            std::string payload = "";
            // Send Request
            // METHOD | DELETE
            // Body     | 
            int httpCode = sendRequest(url, "DELETE", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<DnsRecord>
        >
        DNSApi::
        getDnsDomain(
            
            int id
            
        )
        {
            std::string url = basepath + "/dns/{id}"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<DnsRecord> obj = std::list<DnsRecord>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                DnsRecord tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<DnsRecord>> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<DnsListItem>
        >
        DNSApi::
        getDnsList(
        )
        {
            std::string url = basepath + "/dns"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<DnsListItem> obj = std::list<DnsListItem>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                DnsListItem tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<DnsListItem>> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DNSApi::
        updateDnsRecord(
            
            int domainId
            , 
            
            int recordId
            , 
            
            std::string name
            , 
            
            DnsRecordType type
            , 
            
            std::string content
            , 
            
            std::string ttl
            , 
            
            std::string prio
            , 
            
            std::string disabled
            , 
            
            std::string ordername
            , 
            
            std::string auth
            
        )
        {
            std::string url = basepath + "/dns/{domainId}/{recordId}"; //domainId recordId 


            // Headers  | 

            // Query    | 

            // Form     | name type content ttl prio disabled ordername auth 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("name",name);
            addFormParam("type",type);
            addFormParam("content",content);
            addFormParam("ttl",ttl);
            addFormParam("prio",prio);
            addFormParam("disabled",disabled);
            addFormParam("ordername",ordername);
            addFormParam("auth",auth);


                std::string s_domainId("{");
                s_domainId.append("domainId");
                s_domainId.append("}");

                int pos = url.find(s_domainId);

                url.erase(pos, s_domainId.length());
                url.insert(pos, stringify(domainId));
                std::string s_recordId("{");
                s_recordId.append("recordId");
                s_recordId.append("}");

                int pos = url.find(s_recordId);

                url.erase(pos, s_recordId.length());
                url.insert(pos, stringify(recordId));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }



