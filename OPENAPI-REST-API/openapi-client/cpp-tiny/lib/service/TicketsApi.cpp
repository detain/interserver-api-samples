#include "TicketsApi.h"

using namespace Tiny;



        Response<
            TicketNewResponse
        >
        TicketsApi::
        addNewTicket(
            
            TicketNew ticketNew
            
        )
        {
            std::string url = basepath + "/tickets/new"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | ticketNew



            payload = ticketNew.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            TicketNewResponse obj(output_string);


            Response<TicketNewResponse> response(obj, httpCode);
            return response;
        }

        Response<
            CloseTicketResponseSchema
        >
        TicketsApi::
        closeTicket(
            
            std::string id
            
        )
        {
            std::string url = basepath + "/tickets/{id}/close"; //id 


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




            CloseTicketResponseSchema obj(output_string);


            Response<CloseTicketResponseSchema> response(obj, httpCode);
            return response;
        }

        Response<
            ViewTicketResponse
        >
        TicketsApi::
        deleteTicketInfo(
            
            long id
            
        )
        {
            std::string url = basepath + "/tickets/{id}"; //id 


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




            ViewTicketResponse obj(output_string);


            Response<ViewTicketResponse> response(obj, httpCode);
            return response;
        }

        Response<
            String
        >
        TicketsApi::
        getNewTicket(
        )
        {
            std::string url = basepath + "/tickets/new"; //


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


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            ViewTicketResponse
        >
        TicketsApi::
        getTicketInfo(
            
            long id
            
        )
        {
            std::string url = basepath + "/tickets/{id}"; //id 


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




            ViewTicketResponse obj(output_string);


            Response<ViewTicketResponse> response(obj, httpCode);
            return response;
        }

        Response<
            Tickets
        >
        TicketsApi::
        getTicketsList(
            
            int page
            , 
            
            std::string period
            , 
            
            std::string view
            
        )
        {
            std::string url = basepath + "/tickets"; //


            // Headers  | 

            // Query    | page period view 
            addQueryParam("page",page);
            addQueryParam("period",period);
            addQueryParam("view",view);

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            Tickets obj(output_string);


            Response<Tickets> response(obj, httpCode);
            return response;
        }

        Response<
            ViewTicketResponse
        >
        TicketsApi::
        postTicketInfo(
            
            long id
            
        )
        {
            std::string url = basepath + "/tickets/{id}"; //id 


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




            ViewTicketResponse obj(output_string);


            Response<ViewTicketResponse> response(obj, httpCode);
            return response;
        }

        Response<
            Tickets
        >
        TicketsApi::
        postTicketsList(
        )
        {
            std::string url = basepath + "/tickets"; //


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




            Tickets obj(output_string);


            Response<Tickets> response(obj, httpCode);
            return response;
        }

        Response<
            ViewTicketResponse
        >
        TicketsApi::
        putTicketInfo(
            
            long id
            
        )
        {
            std::string url = basepath + "/tickets/{id}"; //id 


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
            // METHOD | PUT
            // Body     | 
            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            ViewTicketResponse obj(output_string);


            Response<ViewTicketResponse> response(obj, httpCode);
            return response;
        }

        Response<
            ReplyTicketResponseSchema
        >
        TicketsApi::
        replyTicket(
            
            long id
            , 
            
            ReplyTicketRequest replyTicketRequest
            
        )
        {
            std::string url = basepath + "/tickets/{id}/reply"; //id 


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
            // Body     | replyTicketRequest



            payload = replyTicketRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            ReplyTicketResponseSchema obj(output_string);


            Response<ReplyTicketResponseSchema> response(obj, httpCode);
            return response;
        }

        Response<
            UpdateTicketResponseSchema
        >
        TicketsApi::
        updateTicketInfo(
            
            long id
            , 
            
            UpdateTicket updateTicket
            
        )
        {
            std::string url = basepath + "/tickets/{id}/update"; //id 


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
            // Body     | updateTicket



            payload = updateTicket.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            UpdateTicketResponseSchema obj(output_string);


            Response<UpdateTicketResponseSchema> response(obj, httpCode);
            return response;
        }



