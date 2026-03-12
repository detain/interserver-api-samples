#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "TicketsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


TicketsManager::TicketsManager()
{

}

TicketsManager::~TicketsManager()
{

}

static gboolean __TicketsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __TicketsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__TicketsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addNewTicketProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TicketNewResponse, Error, void* )
	= reinterpret_cast<void(*)(TicketNewResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TicketNewResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TicketNewResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TicketNewResponse", "TicketNewResponse");
			json_node_free(pJson);

			if ("TicketNewResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool addNewTicketHelper(char * accessToken,
	std::shared_ptr<TicketNew> ticketNew, 
	void(* handler)(TicketNewResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("TicketNew")) {
		node = converttoJson(&ticketNew, "TicketNew", "");
	}
	
	char *jsonStr =  ticketNew.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tickets/new");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addNewTicketProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addNewTicketProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::addNewTicketAsync(char * accessToken,
	std::shared_ptr<TicketNew> ticketNew, 
	void(* handler)(TicketNewResponse, Error, void* )
	, void* userData)
{
	return addNewTicketHelper(accessToken,
	ticketNew, 
	handler, userData, true);
}

bool TicketsManager::addNewTicketSync(char * accessToken,
	std::shared_ptr<TicketNew> ticketNew, 
	void(* handler)(TicketNewResponse, Error, void* )
	, void* userData)
{
	return addNewTicketHelper(accessToken,
	ticketNew, 
	handler, userData, false);
}

static bool closeTicketProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	= reinterpret_cast<void(*)(CloseTicketResponseSchema, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CloseTicketResponseSchema out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CloseTicketResponseSchema")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CloseTicketResponseSchema", "CloseTicketResponseSchema");
			json_node_free(pJson);

			if ("CloseTicketResponseSchema" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool closeTicketHelper(char * accessToken,
	std::string id, 
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/{id}/close");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = closeTicketProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), closeTicketProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::closeTicketAsync(char * accessToken,
	std::string id, 
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	, void* userData)
{
	return closeTicketHelper(accessToken,
	id, 
	handler, userData, true);
}

bool TicketsManager::closeTicketSync(char * accessToken,
	std::string id, 
	void(* handler)(CloseTicketResponseSchema, Error, void* )
	, void* userData)
{
	return closeTicketHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteTicketInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ViewTicketResponse, Error, void* )
	= reinterpret_cast<void(*)(ViewTicketResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ViewTicketResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ViewTicketResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ViewTicketResponse", "ViewTicketResponse");
			json_node_free(pJson);

			if ("ViewTicketResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool deleteTicketInfoHelper(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteTicketInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteTicketInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::deleteTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return deleteTicketInfoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool TicketsManager::deleteTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return deleteTicketInfoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getNewTicketProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool getNewTicketHelper(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/new");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getNewTicketProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getNewTicketProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::getNewTicketAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData)
{
	return getNewTicketHelper(accessToken,
	
	handler, userData, true);
}

bool TicketsManager::getNewTicketSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData)
{
	return getNewTicketHelper(accessToken,
	
	handler, userData, false);
}

static bool getTicketInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ViewTicketResponse, Error, void* )
	= reinterpret_cast<void(*)(ViewTicketResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ViewTicketResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ViewTicketResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ViewTicketResponse", "ViewTicketResponse");
			json_node_free(pJson);

			if ("ViewTicketResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getTicketInfoHelper(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTicketInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTicketInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::getTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return getTicketInfoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool TicketsManager::getTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return getTicketInfoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getTicketsListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Tickets, Error, void* )
	= reinterpret_cast<void(*)(Tickets, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Tickets out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Tickets")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Tickets", "Tickets");
			json_node_free(pJson);

			if ("Tickets" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getTicketsListHelper(char * accessToken,
	int page, std::string period, std::string view, 
	void(* handler)(Tickets, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&page, "int");
	queryParams.insert(pair<string, string>("page", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page");
	}


	itemAtq = stringify(&period, "std::string");
	queryParams.insert(pair<string, string>("period", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("period");
	}


	itemAtq = stringify(&view, "std::string");
	queryParams.insert(pair<string, string>("view", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("view");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTicketsListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTicketsListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::getTicketsListAsync(char * accessToken,
	int page, std::string period, std::string view, 
	void(* handler)(Tickets, Error, void* )
	, void* userData)
{
	return getTicketsListHelper(accessToken,
	page, period, view, 
	handler, userData, true);
}

bool TicketsManager::getTicketsListSync(char * accessToken,
	int page, std::string period, std::string view, 
	void(* handler)(Tickets, Error, void* )
	, void* userData)
{
	return getTicketsListHelper(accessToken,
	page, period, view, 
	handler, userData, false);
}

static bool postTicketInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ViewTicketResponse, Error, void* )
	= reinterpret_cast<void(*)(ViewTicketResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ViewTicketResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ViewTicketResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ViewTicketResponse", "ViewTicketResponse");
			json_node_free(pJson);

			if ("ViewTicketResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool postTicketInfoHelper(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = postTicketInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), postTicketInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::postTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return postTicketInfoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool TicketsManager::postTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return postTicketInfoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool postTicketsListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(Tickets, Error, void* )
	= reinterpret_cast<void(*)(Tickets, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	Tickets out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("Tickets")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "Tickets", "Tickets");
			json_node_free(pJson);

			if ("Tickets" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool postTicketsListHelper(char * accessToken,
	
	void(* handler)(Tickets, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = postTicketsListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), postTicketsListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::postTicketsListAsync(char * accessToken,
	
	void(* handler)(Tickets, Error, void* )
	, void* userData)
{
	return postTicketsListHelper(accessToken,
	
	handler, userData, true);
}

bool TicketsManager::postTicketsListSync(char * accessToken,
	
	void(* handler)(Tickets, Error, void* )
	, void* userData)
{
	return postTicketsListHelper(accessToken,
	
	handler, userData, false);
}

static bool putTicketInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ViewTicketResponse, Error, void* )
	= reinterpret_cast<void(*)(ViewTicketResponse, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ViewTicketResponse out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ViewTicketResponse")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ViewTicketResponse", "ViewTicketResponse");
			json_node_free(pJson);

			if ("ViewTicketResponse" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool putTicketInfoHelper(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/tickets/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = putTicketInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), putTicketInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::putTicketInfoAsync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return putTicketInfoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool TicketsManager::putTicketInfoSync(char * accessToken,
	long long id, 
	void(* handler)(ViewTicketResponse, Error, void* )
	, void* userData)
{
	return putTicketInfoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool replyTicketProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	= reinterpret_cast<void(*)(ReplyTicketResponseSchema, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ReplyTicketResponseSchema out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ReplyTicketResponseSchema")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ReplyTicketResponseSchema", "ReplyTicketResponseSchema");
			json_node_free(pJson);

			if ("ReplyTicketResponseSchema" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool replyTicketHelper(char * accessToken,
	long long id, std::shared_ptr<ReplyTicketRequest> replyTicketRequest, 
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("ReplyTicketRequest")) {
		node = converttoJson(&replyTicketRequest, "ReplyTicketRequest", "");
	}
	
	char *jsonStr =  replyTicketRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tickets/{id}/reply");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = replyTicketProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), replyTicketProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::replyTicketAsync(char * accessToken,
	long long id, std::shared_ptr<ReplyTicketRequest> replyTicketRequest, 
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	, void* userData)
{
	return replyTicketHelper(accessToken,
	id, replyTicketRequest, 
	handler, userData, true);
}

bool TicketsManager::replyTicketSync(char * accessToken,
	long long id, std::shared_ptr<ReplyTicketRequest> replyTicketRequest, 
	void(* handler)(ReplyTicketResponseSchema, Error, void* )
	, void* userData)
{
	return replyTicketHelper(accessToken,
	id, replyTicketRequest, 
	handler, userData, false);
}

static bool updateTicketInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	= reinterpret_cast<void(*)(UpdateTicketResponseSchema, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	UpdateTicketResponseSchema out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("UpdateTicketResponseSchema")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "UpdateTicketResponseSchema", "UpdateTicketResponseSchema");
			json_node_free(pJson);

			if ("UpdateTicketResponseSchema" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unknown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool updateTicketInfoHelper(char * accessToken,
	long long id, std::shared_ptr<UpdateTicket> updateTicket, 
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");
	headerList = curl_slist_append(headerList, "Content-Type: multipart/form-data");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("UpdateTicket")) {
		node = converttoJson(&updateTicket, "UpdateTicket", "");
	}
	
	char *jsonStr =  updateTicket.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tickets/{id}/update");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateTicketInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (TicketsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateTicketInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TicketsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TicketsManager::updateTicketInfoAsync(char * accessToken,
	long long id, std::shared_ptr<UpdateTicket> updateTicket, 
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	, void* userData)
{
	return updateTicketInfoHelper(accessToken,
	id, updateTicket, 
	handler, userData, true);
}

bool TicketsManager::updateTicketInfoSync(char * accessToken,
	long long id, std::shared_ptr<UpdateTicket> updateTicket, 
	void(* handler)(UpdateTicketResponseSchema, Error, void* )
	, void* userData)
{
	return updateTicketInfoHelper(accessToken,
	id, updateTicket, 
	handler, userData, false);
}

