#include "BackupsApi.h"

using namespace Tiny;



        Response<
            BackupOrderPostResponse
        >
        BackupsApi::
        addBackup(
            
            bool validateOnly
            , 
            
            int serviceType
            , 
            
            std::string coupon
            
        )
        {
            std::string url = basepath + "/backups/order"; //


            // Headers  | 

            // Query    | 

            // Form     | validateOnly serviceType coupon 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("validateOnly",validateOnly);
            addFormParam("serviceType",serviceType);
            addFormParam("coupon",coupon);




            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            BackupOrderPostResponse obj(output_string);


            Response<BackupOrderPostResponse> response(obj, httpCode);
            return response;
        }

        Response<
            CancelBackup_200_response
        >
        BackupsApi::
        cancelBackup(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}"; //id 


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




            CancelBackup_200_response obj(output_string);


            Response<CancelBackup_200_response> response(obj, httpCode);
            return response;
        }

        Response<
            Backup
        >
        BackupsApi::
        getBackupInfo(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}"; //id 


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




            Backup obj(output_string);


            Response<Backup> response(obj, httpCode);
            return response;
        }

        Response<
            ChargeInvoiceRows
        >
        BackupsApi::
        getBackupInvoices(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}/invoices"; //id 


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
            BackupLoginResponse
        >
        BackupsApi::
        getBackupLogin(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}/login"; //id 


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




            BackupLoginResponse obj(output_string);


            Response<BackupLoginResponse> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<BackupRow>
        >
        BackupsApi::
        getBackupsList(
        )
        {
            std::string url = basepath + "/backups"; //


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



            std::list<BackupRow> obj = std::list<BackupRow>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                BackupRow tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<BackupRow>> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        BackupsApi::
        getBackupsWelcomeEmail(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}/welcome_email"; //id 


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
            BackupsOrder
        >
        BackupsApi::
        getNewBackup(
        )
        {
            std::string url = basepath + "/backups/order"; //


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




            BackupsOrder obj(output_string);


            Response<BackupsOrder> response(obj, httpCode);
            return response;
        }

        Response<
            String
        >
        BackupsApi::
        updateBackupInfo(
            
            int id
            
        )
        {
            std::string url = basepath + "/backups/{id}"; //id 


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


            Response<String> response(output, httpCode);
            return response;
        }

        Response<
            BackupOrderPutResponse
        >
        BackupsApi::
        validateBackupOrder(
            
            bool validateOnly
            , 
            
            int serviceType
            , 
            
            std::string coupon
            
        )
        {
            std::string url = basepath + "/backups/order"; //


            // Headers  | 

            // Query    | 

            // Form     | validateOnly serviceType coupon 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("validateOnly",validateOnly);
            addFormParam("serviceType",serviceType);
            addFormParam("coupon",coupon);




            std::string payload = "";
            // Send Request
            // METHOD | PUT
            // Body     | 
            int httpCode = sendRequest(url, "PUT", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            BackupOrderPutResponse obj(output_string);


            Response<BackupOrderPutResponse> response(obj, httpCode);
            return response;
        }



