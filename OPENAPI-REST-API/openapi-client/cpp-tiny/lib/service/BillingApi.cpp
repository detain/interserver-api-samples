#include "BillingApi.h"

using namespace Tiny;



        Response<
            SuccessTextResponse
        >
        BillingApi::
        addAccountCreditCard(
            
            std::string name
            , 
            
            std::string address
            , 
            
            std::string city
            , 
            
            std::string state
            , 
            
            std::string country
            , 
            
            std::string zip
            , 
            
            std::string cc
            , 
            
            std::string ccExp
            , 
            
            std::string ccCcv2
            
        )
        {
            std::string url = basepath + "/account/creditcards"; //


            // Headers  | 

            // Query    | 

            // Form     | name address city state country zip cc ccExp ccCcv2 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("name",name);
            addFormParam("address",address);
            addFormParam("city",city);
            addFormParam("state",state);
            addFormParam("country",country);
            addFormParam("zip",zip);
            addFormParam("cc",cc);
            addFormParam("cc_exp",ccExp);
            addFormParam("cc_ccv2",ccCcv2);




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
        BillingApi::
        addBillingCreditCard(
            
            BillingAddCcRequest billingAddCcRequest
            
        )
        {
            std::string url = basepath + "/billing/creditcards"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | billingAddCcRequest



            payload = billingAddCcRequest.toJson().dump();

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
        BillingApi::
        addBillingPrepay(
            
            BillingPrepayRequest billingPrepayRequest
            
        )
        {
            std::string url = basepath + "/billing/prepays"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | billingPrepayRequest



            payload = billingPrepayRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            std::string
        >
        BillingApi::
        deleteAccountCreditCard(
            
            std::string id
            
        )
        {
            std::string url = basepath + "/account/creditcards/{id}"; //id 


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



            bourne::json jsonPayload(output_string);
            std::string obj;
            jsonToValue(&obj, jsonPayload, "std::string");



            Response<std::string> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        BillingApi::
        deleteBillingCreditCard(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/creditcards/{id}"; //id 


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
        BillingApi::
        deleteBillingInvoice(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/invoices/{id}"; //id 


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
        BillingApi::
        deleteBillingPrepay(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/prepays/{id}"; //id 


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
            std::list<AffiliateBannerRow>
        >
        BillingApi::
        getAffiliateBanners(
        )
        {
            std::string url = basepath + "/affiliate/banners"; //


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



            std::list<AffiliateBannerRow> obj = std::list<AffiliateBannerRow>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                AffiliateBannerRow tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<AffiliateBannerRow>> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        BillingApi::
        getAffiliateRichReport(
        )
        {
            std::string url = basepath + "/affiliate/rich_report"; //


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




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            StatusMonthlyBreakdown
        >
        BillingApi::
        getAffiliateSalesGraph(
            
            int days
            
        )
        {
            std::string url = basepath + "/affiliate/sales_graph"; //


            // Headers  | 

            // Query    | days 
            addQueryParam("days",days);

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            StatusMonthlyBreakdown obj(output_string);


            Response<StatusMonthlyBreakdown> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        BillingApi::
        getAffiliateSalesReport(
        )
        {
            std::string url = basepath + "/affiliate/sales_report"; //


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




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            MonthlyCounts&lt;std::string, int&gt;
        >
        BillingApi::
        getAffiliateTrafficGraph(
            
            int days
            
        )
        {
            std::string url = basepath + "/affiliate/traffic_graph"; //


            // Headers  | 

            // Query    | days 
            addQueryParam("days",days);

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            MonthlyCounts&lt;std::string, int&gt; obj(output_string);


            Response<MonthlyCounts&lt;std::string, int&gt;> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<AffiliateTrafficRow>
        >
        BillingApi::
        getAffiliateWebTraffic(
        )
        {
            std::string url = basepath + "/affiliate/web_traffic"; //


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



            std::list<AffiliateTrafficRow> obj = std::list<AffiliateTrafficRow>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                AffiliateTrafficRow tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<AffiliateTrafficRow>> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        BillingApi::
        getBillingCart(
        )
        {
            std::string url = basepath + "/billing/cart"; //


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




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        BillingApi::
        getBillingCreditCardVerify(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/creditcards/{id}/verify"; //id 


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
            BillingInvoiceDetail&lt;std::string, std::string&gt;
        >
        BillingApi::
        getBillingInvoice(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/invoices/{id}"; //id 


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




            BillingInvoiceDetail&lt;std::string, std::string&gt; obj(output_string);


            Response<BillingInvoiceDetail&lt;std::string, std::string&gt;> response(obj, httpCode);
            return response;
        }

        Response<
            BillingInvoiceList
        >
        BillingApi::
        getBillingInvoices(
        )
        {
            std::string url = basepath + "/billing/invoices"; //


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




            BillingInvoiceList obj(output_string);


            Response<BillingInvoiceList> response(obj, httpCode);
            return response;
        }

        Response<
            Object
        >
        BillingApi::
        getBillingPrePays(
        )
        {
            std::string url = basepath + "/billing/prepays"; //


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




            Object obj(output_string);


            Response<Object> response(obj, httpCode);
            return response;
        }

        Response<
            std::list<Invoice>
        >
        BillingApi::
        getInvoices(
            
            std::string searchString
            , 
            
            int skip
            , 
            
            int limit
            
        )
        {
            std::string url = basepath + "/invoices"; //


            // Headers  | 

            // Query    | searchString skip limit 
            addQueryParam("searchString",searchString);
            addQueryParam("skip",skip);
            addQueryParam("limit",limit);

            // Form     | 





            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();



            std::list<Invoice> obj = std::list<Invoice>();
            bourne::json jsonPayload(output_string);








            
            for(auto& var : jsonPayload.array_range())
            {
                Invoice tmp(var.dump());
                obj.push_back(tmp);
            }
            







            Response<std::list<Invoice>> response(obj, httpCode);
            return response;
        }

        Response<
            InitiatePayment_200_response
        >
        BillingApi::
        initiatePayment(
            
            std::string method
            , 
            
            std::string invoices
            
        )
        {
            std::string url = basepath + "/pay/{method}/{invoices}"; //method invoices 


            // Headers  | 

            // Query    | 

            // Form     | 



                std::string s_method("{");
                s_method.append("method");
                s_method.append("}");

                int pos = url.find(s_method);

                url.erase(pos, s_method.length());
                url.insert(pos, stringify(method));
                std::string s_invoices("{");
                s_invoices.append("invoices");
                s_invoices.append("}");

                int pos = url.find(s_invoices);

                url.erase(pos, s_invoices.length());
                url.insert(pos, stringify(invoices));


            std::string payload = "";
            // Send Request
            // METHOD | GET
            // Body     | 
            int httpCode = sendRequest(url, "GET", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            InitiatePayment_200_response obj(output_string);


            Response<InitiatePayment_200_response> response(obj, httpCode);
            return response;
        }

        Response<
            SuccessTextResponse
        >
        BillingApi::
        postBillingCreditCardVerify(
            
            int id
            , 
            
            BillingVerifyCcRequest billingVerifyCcRequest
            
        )
        {
            std::string url = basepath + "/billing/creditcards/{id}/verify"; //id 


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
            // Body     | billingVerifyCcRequest



            payload = billingVerifyCcRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            std::string
        >
        BillingApi::
        updateAccountCreditCard(
            
            int id
            
        )
        {
            std::string url = basepath + "/account/creditcards/{id}"; //id 


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



            bourne::json jsonPayload(output_string);
            std::string obj;
            jsonToValue(&obj, jsonPayload, "std::string");



            Response<std::string> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        BillingApi::
        updateAffiliateDockSetup(
            
            std::string affiliateDockTitle
            , 
            
            std::string affiliateDockDescription
            , 
            
            std::string referrerCoupon
            
        )
        {
            std::string url = basepath + "/affiliate/dock_setup"; //


            // Headers  | 

            // Query    | 

            // Form     | affiliateDockTitle affiliateDockDescription referrerCoupon 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("affiliate_dock_title",affiliateDockTitle);
            addFormParam("affiliate_dock_description",affiliateDockDescription);
            addFormParam("referrer_coupon",referrerCoupon);




            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        BillingApi::
        updateAffiliateLandingPage(
            
            std::string affiliateDockTitle
            , 
            
            std::string affiliateDockDescription
            , 
            
            std::string referrerCoupon
            
        )
        {
            std::string url = basepath + "/affiliate/landing_pg"; //


            // Headers  | 

            // Query    | 

            // Form     | affiliateDockTitle affiliateDockDescription referrerCoupon 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("affiliate_dock_title",affiliateDockTitle);
            addFormParam("affiliate_dock_description",affiliateDockDescription);
            addFormParam("referrer_coupon",referrerCoupon);




            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            TextResponse obj(output_string);


            Response<TextResponse> response(obj, httpCode);
            return response;
        }

        Response<
            TextResponse
        >
        BillingApi::
        updateAffiliatePaymentSetup(
            
            std::string affiliatePaypal
            , 
            
            std::string affiliatePaymentMethod
            
        )
        {
            std::string url = basepath + "/affiliate/payment_setup"; //


            // Headers  | 

            // Query    | 

            // Form     | affiliatePaypal affiliatePaymentMethod 
            addHeader("Content-Type", "application/x-www-form-urlencoded");

            addFormParam("affiliate_paypal",affiliatePaypal);
            addFormParam("affiliate_payment_method",affiliatePaymentMethod);




            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | 
            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

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
        BillingApi::
        updateBillingCreditCard(
            
            int id
            
        )
        {
            std::string url = basepath + "/billing/creditcards/{id}"; //id 


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
        BillingApi::
        updateBillingPaymentMethod(
            
            BillingPaymentMethodRequest billingPaymentMethodRequest
            
        )
        {
            std::string url = basepath + "/billing/payment_method"; //


            // Headers  | 

            // Query    | 

            // Form     | 
            addHeader("Content-Type", "application/json");





            std::string payload = "";
            // Send Request
            // METHOD | POST
            // Body     | billingPaymentMethodRequest



            payload = billingPaymentMethodRequest.toJson().dump();

            int httpCode = sendRequest(url, "POST", reinterpret_cast<uint8_t*>(&payload[0]), payload.length());

            // Handle Request
            String output = getResponseBody();
            std::string output_string = output.c_str();




            SuccessTextResponse obj(output_string);


            Response<SuccessTextResponse> response(obj, httpCode);
            return response;
        }



