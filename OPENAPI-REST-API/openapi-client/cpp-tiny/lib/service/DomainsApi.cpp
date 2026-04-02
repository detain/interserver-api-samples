#include "DomainsApi.h"

using namespace Tiny;



        Response<
            ServiceOrderPostResponse
        >
        DomainsApi::
        addDomain(
        )
        {
            std::string url = basepath + "/domains/order"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            ServiceOrderPostResponse obj(output_string);


            Response<ServiceOrderPostResponse> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        addDomainDnssec(
            
            int id
            , 
            
            DomainDnssecRequest domainDnssecRequest
            
        )
        {
            std::string url = basepath + "/domains/{id}/dnssec"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | domainDnssecRequest



            payload = domainDnssecRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        DomainsApi::
        addDomainNameserver(
            
            int id
            , 
            
            DomainNameserverPostRequest domainNameserverPostRequest
            
        )
        {
            std::string url = basepath + "/domains/{id}/nameservers"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | domainNameserverPostRequest



            payload = domainNameserverPostRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            CancelDomain_200_response
        >
        DomainsApi::
        cancelDomain(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}"; //id 


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




            CancelDomain_200_response obj(output_string);


            Response<CancelDomain_200_response> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        deleteDomainDnssec(
            
            int id
            , 
            
            std::string action
            
        )
        {
            std::string url = basepath + "/domains/{id}/dnssec"; //id 


            // Headers  | 

            // Query    | action 
            addQueryParam("action",action);

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
            TextResponse
        >
        DomainsApi::
        deleteDomainNameserver(
            
            int id
            , 
            
            int index
            
        )
        {
            std::string url = basepath + "/domains/{id}/nameservers"; //id 


            // Headers  | 

            // Query    | index 
            addQueryParam("index",index);

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




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            DomainContactDetails
        >
        DomainsApi::
        getDomainContact(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/contact"; //id 


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




            DomainContactDetails obj(output_string);


            Response<DomainContactDetails> response(obj, httpCode);
            return response;
        }

        Response<
            DomainDnssecRecords
        >
        DomainsApi::
        getDomainDnssec(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/dnssec"; //id 


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




            DomainDnssecRecords obj(output_string);


            Response<DomainDnssecRecords> response(obj, httpCode);
            return response;
        }

        Response<
            Domain
        >
        DomainsApi::
        getDomainInfo(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}"; //id 


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




            Domain obj(output_string);


            Response<Domain> response(obj, httpCode);
            return response;
        }

        Response<
            ChargeInvoiceRows
        >
        DomainsApi::
        getDomainInvoices(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/invoices"; //id 


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




            ChargeInvoiceRows obj(output_string);


            Response<ChargeInvoiceRows> response(obj, httpCode);
            return response;
        }

        Response<
            DomainLookupResponse
        >
        DomainsApi::
        getDomainLookup(
            
            std::string name
            
        )
        {
            std::string url = basepath + "/domains/lookup/{name}"; //name 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_name("{");
                s_name.append("name");
                s_name.append("}");

                int pos = url.find(s_name);

                url.erase(pos, s_name.length());
                url.insert(pos, stringify(name));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            DomainLookupResponse obj(output_string);


            Response<DomainLookupResponse> response(obj, httpCode);
            return response;
        }

        Response<
            DomainNameserverGetResponse
        >
        DomainsApi::
        getDomainNameservers(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/nameservers"; //id 


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




            DomainNameserverGetResponse obj(output_string);


            Response<DomainNameserverGetResponse> response(obj, httpCode);
            return response;
        }

        Response<
            String
        >
        DomainsApi::
        getDomainOrderFields(
            
            std::string domain
            , 
            
            std::string regType
            
        )
        {
            std::string url = basepath + "/domains/order/{domain}/{regType}"; //domain regType 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_domain("{");
                s_domain.append("domain");
                s_domain.append("}");

                int pos = url.find(s_domain);

                url.erase(pos, s_domain.length());
                url.insert(pos, stringify(domain));
                std::string s_regType("{");
                s_regType.append("regType");
                s_regType.append("}");

                int pos = url.find(s_regType);

                url.erase(pos, s_regType.length());
                url.insert(pos, stringify(regType));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            String
        >
        DomainsApi::
        getDomainOrderSearchResults(
            
            std::string domain
            
        )
        {
            std::string url = basepath + "/domains/order/{domain}"; //domain 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_domain("{");
                s_domain.append("domain");
                s_domain.append("}");

                int pos = url.find(s_domain);

                url.erase(pos, s_domain.length());
                url.insert(pos, stringify(domain));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        getDomainRenewal(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/renew"; //id 


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




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            DomainSearchResponse
        >
        DomainsApi::
        getDomainSearch(
            
            std::string name
            
        )
        {
            std::string url = basepath + "/domains/search/{name}"; //name 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_name("{");
                s_name.append("name");
                s_name.append("}");

                int pos = url.find(s_name);

                url.erase(pos, s_name.length());
                url.insert(pos, stringify(name));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            DomainSearchResponse obj(output_string);


            Response<DomainSearchResponse> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        getDomainTransfer(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/transfer"; //id 


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




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        getDomainWhoisPrivacy(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/whois"; //id 


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




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<DomainRow>
        >
        DomainsApi::
        getDomainsList(
        )
        {
            std::string url = basepath + "/domains"; //


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



            std::list<DomainRow> obj = std::list<DomainRow>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                DomainRow tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<DomainRow>> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        getDomainsWelcomeEmail(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/welcome_email"; //id 


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




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            DomainOrder
        >
        DomainsApi::
        getNewDomain(
        )
        {
            std::string url = basepath + "/domains/order"; //


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




            DomainOrder obj(output_string);


            Response<DomainOrder> response(obj, httpCode);
            return response;
        }

        Response<
            String
        >
        DomainsApi::
        patchDomains(
        )
        {
            std::string url = basepath + "/domains/order"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | PATCH
            // Body     | 
            int httpCode = sendRequest(url, "PATCH", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        postDomainRenewal(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/renew"; //id 


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
            SuccessTextResponse
        >
        DomainsApi::
        postDomainTransfer(
            
            int id
            
        )
        {
            std::string url = basepath + "/domains/{id}/transfer"; //id 


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
        DomainsApi::
        putDomains(
        )
        {
            std::string url = basepath + "/domains/order"; //


            // Headers  | 

            // Query    | 

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | 
            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        updateDomainContact(
            
            int id
            , 
            
            DomainContactDetails domainContactDetails
            
        )
        {
            std::string url = basepath + "/domains/{id}/contact"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | domainContactDetails



            payload = domainContactDetails.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

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
        DomainsApi::
        updateDomainInfo(
            
            std::string id
            
        )
        {
            std::string url = basepath + "/domains/{id}"; //id 


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
            TextResponse
        >
        DomainsApi::
        updateDomainNameservers(
            
            int id
            , 
            
            DomainNameserverPutRequest domainNameserverPutRequest
            
        )
        {
            std::string url = basepath + "/domains/{id}/nameservers"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | domainNameserverPutRequest



            payload = domainNameserverPutRequest.toJson().dump();

            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        DomainsApi::
        updateDomainWhoisPrivacy(
            
            int id
            , 
            
            DomainWhoisPrivacyRequest domainWhoisPrivacyRequest
            
        )
        {
            std::string url = basepath + "/domains/{id}/whois"; //id 


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");



                std::string s_id("{");
                s_id.append("id");
                s_id.append("}");

                int pos = url.find(s_id);

                url.erase(pos, s_id.length());
                url.insert(pos, stringify(id));


            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | domainWhoisPrivacyRequest



            payload = domainWhoisPrivacyRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }



