#tag Class
Protected Class DNSApi
	#tag Method, Flags = &h0
		Sub AddDnsDomain(, domain As String, ip As String)
		  // Operation addDnsDomain
		  // Create DNS Domain
		  // - parameter domain: (form) The domain name. 
		  // - parameter ip: (form) IP Address to point the domain to. 
		  //
		  // Invokes DNSApiCallbackHandler.AddDnsDomainCallback() on completion. 
		  //
		  // - POST /dns
		  // - Creates a new DNS domain and assigns an initial A record pointing to the supplied IP address. The domain is immediately available on InterServer's DNS servers. Use `/dns/{id}` to manage records after creation.
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("domain") = domain
localVarFormParams.Value("ip") = ip
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.AddDnsDomain()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.AddDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.AddDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof Me.AddDnsDomain_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.AddDnsDomain_error
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod


	#tag Method, Flags = &h21
		Private Sub AddDnsDomain_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  CallbackHandler.AddDnsDomainCallback(error)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub AddDnsDomain_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  #Pragma Unused Headers
		  #Pragma Unused Content

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", "")
		  
		  
		  
		  CallbackHandler.AddDnsDomainCallback(error)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub AddDnsRecord(, id As String, name As String, type As DnsRecordType, content As String, Optional ttl As Xoson.O.OptionalInteger, Optional prio As Xoson.O.OptionalInteger)
		  // Operation addDnsRecord
		  // Add DNS Record to Domain
		  // - parameter id: (path) The DNS Domain ID. 
		  // - parameter name: (form) Name part of record 
		  // - parameter type: (form)  
		  // - parameter content: (form) Content of record 
		  // - parameter ttl: (form) Time-to-live (optional, default to 86400)
		  // - parameter prio: (form) Priority (optional, default to 0)
		  //
		  // Invokes DNSApiCallbackHandler.AddDnsRecordCallback() on completion. 
		  //
		  // - POST /dns/{id}
		  // - Adds a new DNS record to the specified domain. Provide the record type (A, AAAA, CNAME, MX, TXT, etc.), name, content, TTL, and priority. The record takes effect on the DNS servers immediately. Use `GET /dns/{id}` afterward to confirm the record was created.
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("name") = name
localVarFormParams.Value("type") = Xoson.toJSON(type)
localVarFormParams.Value("content") = content
If ttl <> nil Then localVarFormParams.Value("ttl") = ttl.ToString
If prio <> nil Then localVarFormParams.Value("prio") = prio.ToString
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.AddDnsRecord()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.AddDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.AddDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns/{id}"
		  
		  Dim localVarPathStringid As String = id
		  
		  localVarPath = localVarPath.ReplaceAllB("{id}", localVarPathStringid)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof Me.AddDnsRecord_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.AddDnsRecord_error
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod


	#tag Method, Flags = &h21
		Private Sub AddDnsRecord_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  CallbackHandler.AddDnsRecordCallback(error)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub AddDnsRecord_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  #Pragma Unused Headers
		  #Pragma Unused Content

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", "")
		  
		  
		  
		  CallbackHandler.AddDnsRecordCallback(error)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub DeleteDnsDomain(, id As String)
		  // Operation deleteDnsDomain
		  // Delete DNS Domain
		  // - parameter id: (path) The DNS domain ID to delete. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. 
		  //
		  // Invokes DNSApiCallbackHandler.DeleteDnsDomainCallback() on completion. 
		  //
		  // - DELETE /dns/{id}
		  // - Deletes a DNS domain and all of its associated records from the DNS servers. This action is permanent and cannot be undone. Any services relying on these DNS records will be affected immediately.
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.DeleteDnsDomain()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.DeleteDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.DeleteDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns/{id}"
		  
		  Dim localVarPathStringid As String = id
		  
		  localVarPath = localVarPath.ReplaceAllB("{id}", localVarPathStringid)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof Me.DeleteDnsDomain_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.DeleteDnsDomain_error
		  
		  localVarHTTPSocket.SendRequest("DELETE", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod


	#tag Method, Flags = &h21
		Private Sub DeleteDnsDomain_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  CallbackHandler.DeleteDnsDomainCallback(error)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub DeleteDnsDomain_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  #Pragma Unused Headers
		  #Pragma Unused Content

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", "")
		  
		  
		  
		  CallbackHandler.DeleteDnsDomainCallback(error)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub DeleteDnsRecord(, domainId As Integer, recordId As Integer)
		  // Operation deleteDnsRecord
		  // Delete DNS Record
		  // - parameter domainId: (path) The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. 
		  // - parameter recordId: (path) The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. 
		  //
		  // Invokes DNSApiCallbackHandler.DeleteDnsRecordCallback() on completion. 
		  //
		  // - DELETE /dns/{domainId}/{recordId}
		  // - Removes a DNS record from the specified domain. The deletion takes effect on the DNS servers immediately. Use `GET /dns/{id}` to verify the record has been removed.
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.DeleteDnsRecord()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.DeleteDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.DeleteDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns/{domainId}/{recordId}"
		  
		  Dim localVarPathStringdomainId As String = domainId.ToString
		  
		  localVarPath = localVarPath.ReplaceAllB("{domainId}", localVarPathStringdomainId)
		  Dim localVarPathStringrecordId As String = recordId.ToString
		  
		  localVarPath = localVarPath.ReplaceAllB("{recordId}", localVarPathStringrecordId)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof Me.DeleteDnsRecord_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.DeleteDnsRecord_error
		  
		  localVarHTTPSocket.SendRequest("DELETE", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod


	#tag Method, Flags = &h21
		Private Sub DeleteDnsRecord_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  CallbackHandler.DeleteDnsRecordCallback(error)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub DeleteDnsRecord_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  #Pragma Unused Headers
		  #Pragma Unused Content

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", "")
		  
		  
		  
		  CallbackHandler.DeleteDnsRecordCallback(error)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetDnsDomain(, id As Integer)
		  // Operation getDnsDomain
		  // List Domain DNS Records
		  // - 
		  // - parameter id: (path) The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. 
		  //
		  // Invokes DNSApiCallbackHandler.GetDnsDomainCallback(DnsRecord) on completion. 
		  //
		  // - GET /dns/{id}
		  // - Returns the full set of DNS records for the specified domain, including NS, A, AAAA, CNAME, MX, TXT, and other record types. Use the record `id` values with `/dns/{domainId}/{recordId}` to update or delete individual records.
		  // - defaultResponse: Nil
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.GetDnsDomain()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.GetDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.GetDnsDomain()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns/{id}"
		  
		  Dim localVarPathStringid As String = id.ToString
		  
		  localVarPath = localVarPath.ReplaceAllB("{id}", localVarPathStringid)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetDnsDomain_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetDnsDomain_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetDnsDomainPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, outData() As OpenAPIClient.Models.DnsRecord) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
		      Try
		        Xoson.fromJSON(outData, Content.toText())

		      Catch e As JSONException
		        error.Message = error.Message + " with JSON parse exception: " + e.Message
		        error.ErrorNumber = kErrorInvalidJSON
		        Return False
		        
		      Catch e As Xojo.Data.InvalidJSONException
		        error.Message = error.Message + " with Xojo.Data.JSON parse exception: " + e.Message
		        error.ErrorNumber = kErrorInvalidJSON
		        Return False
		        
		      Catch e As Xoson.XosonException
		        error.Message = error.Message + " with Xoson parse exception: " + e.Message
		        error.ErrorNumber = kErrorXosonProblem
		        Return False

		      End Try
		      
		    ElseIf contentType.LeftB(19) = "multipart/form-data" then
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    ElseIf contentType.LeftB(33) = "application/x-www-form-urlencoded" then
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    Else
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    End If
		  Else
		    error.Message = error.Message + ". " + Content
			error.ErrorNumber = kErrorHTTPFail
		    Return False
		  End If
		  
		  Return True
		End Function
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetDnsDomain_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data() As OpenAPIClient.Models.DnsRecord
		  CallbackHandler.GetDnsDomainCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetDnsDomain_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data() As OpenAPIClient.Models.DnsRecord
		  Call GetDnsDomainPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetDnsDomainCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetDnsList()
		  // Operation getDnsList
		  // List DNS Domains
		  // - 
		  //
		  // Invokes DNSApiCallbackHandler.GetDnsListCallback(DnsListItem) on completion. 
		  //
		  // - GET /dns
		  // - Returns the DNS domains on your account along with their primary A record content. Use the `id` from each entry with `/dns/{id}` to retrieve the full record set, or to add, update, and delete individual records.
		  // - defaultResponse: Nil
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.GetDnsList()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.GetDnsList()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.GetDnsList()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetDnsList_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetDnsList_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetDnsListPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, outData() As OpenAPIClient.Models.DnsListItem) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
		      Try
		        Xoson.fromJSON(outData, Content.toText())

		      Catch e As JSONException
		        error.Message = error.Message + " with JSON parse exception: " + e.Message
		        error.ErrorNumber = kErrorInvalidJSON
		        Return False
		        
		      Catch e As Xojo.Data.InvalidJSONException
		        error.Message = error.Message + " with Xojo.Data.JSON parse exception: " + e.Message
		        error.ErrorNumber = kErrorInvalidJSON
		        Return False
		        
		      Catch e As Xoson.XosonException
		        error.Message = error.Message + " with Xoson parse exception: " + e.Message
		        error.ErrorNumber = kErrorXosonProblem
		        Return False

		      End Try
		      
		    ElseIf contentType.LeftB(19) = "multipart/form-data" then
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    ElseIf contentType.LeftB(33) = "application/x-www-form-urlencoded" then
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    Else
		      error.Message = "Unsupported media type: " + contentType
		      error.ErrorNumber = kErrorUnsupportedMediaType
		      Return False

		    End If
		  Else
		    error.Message = error.Message + ". " + Content
			error.ErrorNumber = kErrorHTTPFail
		    Return False
		  End If
		  
		  Return True
		End Function
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetDnsList_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data() As OpenAPIClient.Models.DnsListItem
		  CallbackHandler.GetDnsListCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetDnsList_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data() As OpenAPIClient.Models.DnsListItem
		  Call GetDnsListPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetDnsListCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateDnsRecord(, domainId As Integer, recordId As Integer, Optional name As Xoson.O.OptionalString, type As DnsRecordType, Optional content As Xoson.O.OptionalString, Optional ttl As Xoson.O.OptionalString, Optional prio As Xoson.O.OptionalString, Optional disabled As Xoson.O.OptionalString, Optional ordername As Xoson.O.OptionalString, Optional auth As Xoson.O.OptionalString)
		  // Operation updateDnsRecord
		  // Update DNS Record
		  // - parameter domainId: (path) The DNS domain ID. Use the &#x60;id&#x60; from &#x60;GET /dns&#x60; to identify the domain. 
		  // - parameter recordId: (path) The DNS record ID within the domain. Use the record &#x60;id&#x60; from &#x60;GET /dns/{id}&#x60; to identify the record. 
		  // - parameter name: (form)  (optional, default to Sample)
		  // - parameter type: (form)  (optional, default to Nil)
		  // - parameter content: (form)  (optional, default to Sample)
		  // - parameter ttl: (form)  (optional, default to Sample)
		  // - parameter prio: (form)  (optional, default to Sample)
		  // - parameter disabled: (form)  (optional, default to Sample)
		  // - parameter ordername: (form)  (optional, default to Sample)
		  // - parameter auth: (form)  (optional, default to Sample)
		  //
		  // Invokes DNSApiCallbackHandler.UpdateDnsRecordCallback() on completion. 
		  //
		  // - POST /dns/{domainId}/{recordId}
		  // - Updates an existing DNS record with new values. Use `GET /dns/{id}` to list records and retrieve the record IDs before updating. Changes propagate to the DNS servers immediately.
		  //
		  // - API Key:
		  //   - type: apiKey sessionid 
		  //   - name: sessionIdCookieAuth
		  // - API Key:
		  //   - type: apiKey X-API-KEY (HEADER)
		  //   - name: apiKeyAuth
		  // - API Key:
		  //   - type: apiKey sessionid (HEADER)
		  //   - name: sessionIdHeaderAuth
		  //
		  
		  Dim localVarHTTPSocket As New HTTPSecureSocket
		  Me.PrivateFuncPrepareSocket(localVarHTTPSocket)
		  Dim localVarFormParams As New Dictionary
		  If name <> nil Then localVarFormParams.Value("name") = name
If type <> nil Then localVarFormParams.Value("type") = Xoson.toJSON(type)
If content <> nil Then localVarFormParams.Value("content") = content
If ttl <> nil Then localVarFormParams.Value("ttl") = ttl
If prio <> nil Then localVarFormParams.Value("prio") = prio
If disabled <> nil Then localVarFormParams.Value("disabled") = disabled
If ordername <> nil Then localVarFormParams.Value("ordername") = ordername
If auth <> nil Then localVarFormParams.Value("auth") = auth
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdCookieAuth` before invoking `DNSApi.UpdateDnsRecord()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeyapiKeyAuth` before invoking `DNSApi.UpdateDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `DNSApi.ApiKeysessionIdHeaderAuth` before invoking `DNSApi.UpdateDnsRecord()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/dns/{domainId}/{recordId}"
		  
		  Dim localVarPathStringdomainId As String = domainId.ToString
		  
		  localVarPath = localVarPath.ReplaceAllB("{domainId}", localVarPathStringdomainId)
		  Dim localVarPathStringrecordId As String = recordId.ToString
		  
		  localVarPath = localVarPath.ReplaceAllB("{recordId}", localVarPathStringrecordId)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof Me.UpdateDnsRecord_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateDnsRecord_error
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod


	#tag Method, Flags = &h21
		Private Sub UpdateDnsRecord_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  CallbackHandler.UpdateDnsRecordCallback(error)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateDnsRecord_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  #Pragma Unused Headers
		  #Pragma Unused Content

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", "")
		  
		  
		  
		  CallbackHandler.UpdateDnsRecordCallback(error)
		End Sub
	#tag EndMethod






	#tag Method, Flags = &h21
		Private Function AuthenticationRequired(Realm As String, Headers As InternetHeaders, ByRef Name As String, ByRef Password As String) As Boolean
		  #Pragma Unused Realm
		  #Pragma Unused Headers
		  Name = Me.BasicAuthUser
		  Password = Me.BasicAuthPassword
		  Return True
		End Function
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub PrivateFuncPrepareSocket(socket As HTTPSecureSocket)
		  socket.Secure = Me.useHTTPS
		  socket.ConnectionType = SSLSocket.TLSv12
		  socket.Port = Me.Port
		  socket.RequestHeaders.Delete("Accept")
		  socket.RequestHeaders.AppendHeader("Accept", "text/plain")
		  socket.RequestHeaders.AppendHeader("Accept", "application/json")
		  socket.RequestHeaders.AppendHeader("Content-Type", "application/json")

		  If Me.AdditionalHeaders <> Nil Then
		    For Each HeaderName As Variant In Me.AdditionalHeaders.Keys
		      Dim headerValueS As Variant = additionalHeaders.Value(HeaderName)
		      If headerValueS.IsArray Then
		        If headerValueS.ArrayElementType = Variant.TypeString Then
		          Dim values() As String = headerValueS
		          For Each value As String In values
		            socket.RequestHeaders.AppendHeader(HeaderName, value)
		          Next
		        Else
		          Raise New OpenAPIClient.OpenAPIClientException(kErrorInternal, "AdditionalHeaders only support Strings and String arrays as values.")
		        End If
		      Else
		        socket.RequestHeaders.AppendHeader(HeaderName, headerValueS.StringValue)
		      End If
		    Next
		  End If
		End Sub
	#tag EndMethod



	#tag Property, Flags = &h0
		AdditionalHeaders As Dictionary
	#tag EndProperty

	#tag Property, Flags = &h0
		ApiKeyapiKeyAuth As String
	#tag EndProperty

	#tag Property, Flags = &h0
		ApiKeysessionIdHeaderAuth As String
	#tag EndProperty

	#tag Property, Flags = &h0
		ApiKeysessionIdCookieAuth As String
	#tag EndProperty

	#tag Property, Flags = &h0
		BasePath As String = "https://my.interserver.net/apiv2"
	#tag EndProperty

	#tag Property, Flags = &h0
		BasicAuthPassword As String
	#tag EndProperty

	#tag Property, Flags = &h0
		BasicAuthUser As String
	#tag EndProperty

	#tag Property, Flags = &h0
		CallbackHandler As OpenAPIClient.APIs.DNSApiCallbackHandler
	#tag EndProperty

	#tag Property, Flags = &h0
		Host As String = ""
	#tag EndProperty

	#tag Property, Flags = &h0
		Port As Integer
	#tag EndProperty

	#tag Property, Flags = &h0
		UseHTTPS As Boolean = true
	#tag EndProperty


	#tag ViewBehavior
		#tag ViewProperty
			Name="Name"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="BasePath"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType="MultiLineEditor"
		#tag EndViewProperty
		#tag ViewProperty
			Name="BasicAuthUser"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType="MultiLineEditor"
		#tag EndViewProperty
		#tag ViewProperty
			Name="BasicAuthPassword"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType="MultiLineEditor"
		#tag EndViewProperty
		#tag ViewProperty
			Name="UseHTTPS"
			Visible=false
			Group="Behavior"
			InitialValue="true"
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Port"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Host"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType="MultiLineEditor"
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass
