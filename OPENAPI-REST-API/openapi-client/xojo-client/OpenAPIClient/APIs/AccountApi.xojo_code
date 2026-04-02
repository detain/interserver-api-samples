#tag Class
Protected Class AccountApi
	#tag Method, Flags = &h0
		Sub ChangeAccountUsername()
		  // Operation changeAccountUsername
		  // Change Account Username
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.ChangeAccountUsernameCallback(TextResponse) on completion. 
		  //
		  // - POST /account/username
		  // - Changes the login username for the account. The new username must be unique across all accounts. After changing, use the new username for all future logins.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.ChangeAccountUsername()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.ChangeAccountUsername()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.ChangeAccountUsername()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/username"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.ChangeAccountUsername_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.ChangeAccountUsername_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function ChangeAccountUsernamePrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.TextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.TextResponse
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
		Private Sub ChangeAccountUsername_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.TextResponse
		  CallbackHandler.ChangeAccountUsernameCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub ChangeAccountUsername_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.TextResponse
		  Call ChangeAccountUsernamePrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.ChangeAccountUsernameCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub DeleteAccountOauthName(, name As String)
		  // Operation deleteAccountOauthName
		  // Unlink OAuth Account
		  // - 
		  // - parameter name: (path)  
		  //
		  // Invokes AccountApiCallbackHandler.DeleteAccountOauthNameCallback(SuccessTextResponse) on completion. 
		  //
		  // - DELETE /account/oauth/{name}
		  // - Unlinks a third-party OAuth provider from the account. After unlinking, that provider can no longer be used for login.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.DeleteAccountOauthName()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.DeleteAccountOauthName()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.DeleteAccountOauthName()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/oauth/{name}"
		  
		  Dim localVarPathStringname As String = name
		  
		  localVarPath = localVarPath.ReplaceAllB("{name}", localVarPathStringname)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.DeleteAccountOauthName_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.DeleteAccountOauthName_error
		  
		  
		  localVarHTTPSocket.SendRequest("DELETE", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function DeleteAccountOauthNamePrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub DeleteAccountOauthName_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.DeleteAccountOauthNameCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub DeleteAccountOauthName_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call DeleteAccountOauthNamePrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.DeleteAccountOauthNameCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub DeleteAccountTfa()
		  // Operation deleteAccountTfa
		  // Disable Two-Factor Authentication
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.DeleteAccountTfaCallback(SuccessTextResponse) on completion. 
		  //
		  // - DELETE /account/2fa
		  // - Disables two-factor authentication on the account. After disabling, the account will only require password-based authentication.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.DeleteAccountTfa()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.DeleteAccountTfa()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.DeleteAccountTfa()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/2fa"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.DeleteAccountTfa_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.DeleteAccountTfa_error
		  
		  
		  localVarHTTPSocket.SendRequest("DELETE", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function DeleteAccountTfaPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub DeleteAccountTfa_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.DeleteAccountTfaCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub DeleteAccountTfa_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call DeleteAccountTfaPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.DeleteAccountTfaCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub DeleteIpLimit(, Optional ipLimitRange As OpenAPIClient.Models.IpLimitRange)
		  // Operation deleteIpLimit
		  // Remove IP Access Restriction
		  // - 
		  // - parameter ipLimitRange: (body)  (optional)
		  //
		  // Invokes AccountApiCallbackHandler.DeleteIpLimitCallback(GenericResponse) on completion. 
		  //
		  // - PATCH /account/iplimits
		  // - Removes an IP address range from the account's access restriction list. If this is the last range, IP limiting is effectively disabled and the account becomes accessible from any IP address.
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
		  localVarHTTPSocket.SetRequestContent(Xoson.toJSON(ipLimitRange), "application/json")
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.DeleteIpLimit()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.DeleteIpLimit()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.DeleteIpLimit()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/iplimits"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.DeleteIpLimit_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.DeleteIpLimit_error
		  
		  
		  localVarHTTPSocket.SendRequest("PATCH", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function DeleteIpLimitPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.GenericResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.GenericResponse
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
		Private Sub DeleteIpLimit_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.GenericResponse
		  CallbackHandler.DeleteIpLimitCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub DeleteIpLimit_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.GenericResponse
		  Call DeleteIpLimitPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.DeleteIpLimitCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetAccountInfo()
		  // Operation getAccountInfo
		  // Retrieve Account Details
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.GetAccountInfoCallback(AccountInfo) on completion. 
		  //
		  // - GET /account
		  // - Returns the full account profile including contact information, billing address, and security settings. Use this to populate account management forms or verify account state before making changes with `POST /account`.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.GetAccountInfo()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.GetAccountInfo()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.GetAccountInfo()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetAccountInfo_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetAccountInfo_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetAccountInfoPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.AccountInfo) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.AccountInfo
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
		Private Sub GetAccountInfo_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.AccountInfo
		  CallbackHandler.GetAccountInfoCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetAccountInfo_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.AccountInfo
		  Call GetAccountInfoPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetAccountInfoCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetAccountTfaSetup()
		  // Operation getAccountTfaSetup
		  // Get Two-Factor Setup Data
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.GetAccountTfaSetupCallback(GetAccountTfaSetup200Response) on completion. 
		  //
		  // - GET /account/2fa
		  // - Returns the TOTP secret key needed to configure a two-factor authentication app (e.g. Google Authenticator). Present the `2fa_google_key` as a QR code or display the `2fa_google_split` value for manual entry. After setup, verify with `POST /account/2fa`.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.GetAccountTfaSetup()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.GetAccountTfaSetup()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.GetAccountTfaSetup()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/2fa"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetAccountTfaSetup_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetAccountTfaSetup_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetAccountTfaSetupPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.GetAccountTfaSetup200Response) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.GetAccountTfaSetup200Response
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
		Private Sub GetAccountTfaSetup_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.GetAccountTfaSetup200Response
		  CallbackHandler.GetAccountTfaSetupCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetAccountTfaSetup_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.GetAccountTfaSetup200Response
		  Call GetAccountTfaSetupPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetAccountTfaSetupCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetHome()
		  // Operation getHome
		  // Get Home Data
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.GetHomeCallback(Home) on completion. 
		  //
		  // - GET /home
		  // - Returns an overview of the account suitable for a dashboard home page, including service counts, recent activity, and account-level alerts. Requires an authenticated session.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.GetHome()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.GetHome()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.GetHome()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/home"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetHome_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetHome_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetHomePrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.Home) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.Home
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
		Private Sub GetHome_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.Home
		  CallbackHandler.GetHomeCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetHome_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.Home
		  Call GetHomePrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetHomeCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub GetSearch()
		  // Operation getSearch
		  // Search Autocomplete
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.GetSearchCallback(SearchAutocompleteResponse) on completion. 
		  //
		  // - GET /search
		  // - Returns autocomplete results for the account's services and records. Use this endpoint to power global search experiences in the client portal.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.GetSearch()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.GetSearch()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.GetSearch()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/search"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.GetSearch_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.GetSearch_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function GetSearchPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As SearchAutocompleteResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New SearchAutocompleteResponse
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
		Private Sub GetSearch_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As SearchAutocompleteResponse
		  CallbackHandler.GetSearchCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub GetSearch_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As SearchAutocompleteResponse
		  Call GetSearchPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.GetSearchCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub Logout()
		  // Operation Logout
		  // Log Out
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.LogoutCallback(SuccessTextResponse) on completion. 
		  //
		  // - GET /logout
		  // - Invalidates the current session. After calling this endpoint, the session token can no longer be used for authenticated requests. The client should discard the stored session ID.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.Logout()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.Logout()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.Logout()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/logout"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.Logout_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.Logout_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function LogoutPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub Logout_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.LogoutCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub Logout_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call LogoutPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.LogoutCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub LogoutAccountOauth(, name As String)
		  // Operation logoutAccountOauth
		  // Logout of OAuth
		  // - 
		  // - parameter name: (path)  
		  //
		  // Invokes AccountApiCallbackHandler.LogoutAccountOauthCallback(SuccessTextResponse) on completion. 
		  //
		  // - GET /account/oauth/{name}/logout
		  // - Logs out of the specified OAuth provider session.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.LogoutAccountOauth()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.LogoutAccountOauth()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.LogoutAccountOauth()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/oauth/{name}/logout"
		  
		  Dim localVarPathStringname As String = name
		  
		  localVarPath = localVarPath.ReplaceAllB("{name}", localVarPathStringname)
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.LogoutAccountOauth_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.LogoutAccountOauth_error
		  
		  
		  localVarHTTPSocket.SendRequest("GET", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function LogoutAccountOauthPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub LogoutAccountOauth_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.LogoutAccountOauthCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub LogoutAccountOauth_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call LogoutAccountOauthPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.LogoutAccountOauthCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountApiKey()
		  // Operation updateAccountApiKey
		  // Generate New API Key
		  // - 
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountApiKeyCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account/apikey
		  // - Generates a new API key for the account. The previous key is immediately invalidated. Store the new key securely as it cannot be retrieved later.
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
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountApiKey()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountApiKey()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountApiKey()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/apikey"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountApiKey_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountApiKey_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountApiKeyPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountApiKey_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountApiKeyCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountApiKey_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountApiKeyPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountApiKeyCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountFeatures(, Optional disableReset As Xoson.O.OptionalInteger, Optional disableReinstall As Xoson.O.OptionalInteger)
		  // Operation updateAccountFeatures
		  // Update Account Feature Flags
		  // - 
		  // - parameter disableReset: (form)  (optional, default to 0)
		  // - parameter disableReinstall: (form)  (optional, default to 0)
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountFeaturesCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account/features
		  // - Updates account-level feature flags that control service capabilities. These flags can disable password reset, OS reinstall, or other potentially destructive operations across your services. Changes take effect immediately.
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
		  Dim localVarFormParams As New Dictionary
		  If disableReset <> nil Then localVarFormParams.Value("disable_reset") = disableReset.ToString
If disableReinstall <> nil Then localVarFormParams.Value("disable_reinstall") = disableReinstall.ToString
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountFeatures()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountFeatures()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountFeatures()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/features"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountFeatures_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountFeatures_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountFeaturesPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountFeatures_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountFeaturesCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountFeatures_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountFeaturesPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountFeaturesCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountInfo(, name As String, address As String, city As String, state As String, zip As String, country As String, phone As String, Optional company As Xoson.O.OptionalString, Optional address2 As Xoson.O.OptionalString, Optional locale As Xoson.O.OptionalString, Optional emailInvoices As Xoson.O.OptionalString, Optional emailAbuse As Xoson.O.OptionalString, Optional disableReset As Xoson.O.OptionalBoolean, Optional disableReinstall As Xoson.O.OptionalBoolean, Optional disableServerNotifications As Xoson.O.OptionalBoolean, Optional disableEmailNotifications As Xoson.O.OptionalBoolean, Optional gstin As Xoson.O.OptionalString)
		  // Operation updateAccountInfo
		  // Update Account Information
		  // - 
		  // - parameter name: (form) Your name. 
		  // - parameter address: (form) Your address. 
		  // - parameter city: (form) Your city. 
		  // - parameter state: (form) Your state. 
		  // - parameter zip: (form) Your ZIP code. 
		  // - parameter country: (form) Your country. 
		  // - parameter phone: (form) Your phone number. 
		  // - parameter company: (form) Your company name. (optional, default to Sample)
		  // - parameter address2: (form) Additional address information. (optional, default to Sample)
		  // - parameter locale: (form) Your preferred locale. (optional, default to Sample)
		  // - parameter emailInvoices: (form) Your email for invoice notifications. (optional, default to Sample)
		  // - parameter emailAbuse: (form) Your email for abuse notifications. (optional, default to Sample)
		  // - parameter disableReset: (form) Set to &#x60;true&#x60; to disable account resets, or &#x60;false&#x60; to enable them. (optional, default to False)
		  // - parameter disableReinstall: (form) Set to &#x60;true&#x60; to disable server reinstalls, or &#x60;false&#x60; to enable them. (optional, default to False)
		  // - parameter disableServerNotifications: (form) Set to &#x60;true&#x60; to disable server notifications, or &#x60;false&#x60; to enable them. (optional, default to False)
		  // - parameter disableEmailNotifications: (form) Set to &#x60;true&#x60; to disable email notifications, or &#x60;false&#x60; to enable them. (optional, default to False)
		  // - parameter gstin: (form) Your GST identification number (if applicable). (optional, default to Sample)
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountInfoCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account
		  // - Updates the stored contact and billing information on your account. Submit only the fields you want to change. Validation errors are returned as a 422 response with field-level messages.
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
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("name") = name
If company <> nil Then localVarFormParams.Value("company") = company
localVarFormParams.Value("address") = address
If address2 <> nil Then localVarFormParams.Value("address2") = address2
localVarFormParams.Value("city") = city
localVarFormParams.Value("state") = state
localVarFormParams.Value("zip") = zip
localVarFormParams.Value("country") = country
localVarFormParams.Value("phone") = phone
If locale <> nil Then localVarFormParams.Value("locale") = locale
If emailInvoices <> nil Then localVarFormParams.Value("email_invoices") = emailInvoices
If emailAbuse <> nil Then localVarFormParams.Value("email_abuse") = emailAbuse
If disableReset <> nil Then localVarFormParams.Value("disable_reset") = disableReset.ToString
If disableReinstall <> nil Then localVarFormParams.Value("disable_reinstall") = disableReinstall.ToString
If disableServerNotifications <> nil Then localVarFormParams.Value("disable_server_notifications") = disableServerNotifications.ToString
If disableEmailNotifications <> nil Then localVarFormParams.Value("disable_email_notifications") = disableEmailNotifications.ToString
If gstin <> nil Then localVarFormParams.Value("gstin") = gstin
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountInfo()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountInfo()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountInfo()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountInfo_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountInfo_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountInfoPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountInfo_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountInfoCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountInfo_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountInfoPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountInfoCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountIpLimits(, start As String, Escapedend As String)
		  // Operation updateAccountIpLimits
		  // Add IP Access Restriction
		  // - 
		  // - parameter start: (form) The begining (or first) IP address in the range. 
		  // - parameter Escapedend: (form) The ending (or last) IP address in the range. 
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountIpLimitsCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account/iplimits
		  // - Adds an IP address range to the account's access restriction list. Once IP limiting is active, only requests originating from allowed ranges can access the account. Provide the start and end of the range in dotted-quad notation.
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
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("start") = start
localVarFormParams.Value("end") = Escapedend
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountIpLimits()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountIpLimits()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountIpLimits()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/iplimits"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountIpLimits_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountIpLimits_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountIpLimitsPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountIpLimits_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountIpLimitsCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountIpLimits_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountIpLimitsPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountIpLimitsCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountPassword(, password As String)
		  // Operation updateAccountPassword
		  // Change Account Password
		  // - 
		  // - parameter password: (form)  
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountPasswordCallback(TextResponse) on completion. 
		  //
		  // - POST /account/password
		  // - Changes the account login password. The current password must be provided for verification. After a successful change, existing API keys remain valid but active sessions may require re-authentication.
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
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("password") = password
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountPassword()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountPassword()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountPassword()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/password"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountPassword_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountPassword_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountPasswordPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.TextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.TextResponse
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
		Private Sub UpdateAccountPassword_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.TextResponse
		  CallbackHandler.UpdateAccountPasswordCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountPassword_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.TextResponse
		  Call UpdateAccountPasswordPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountPasswordCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountSshKey(, Optional sshKey As Xoson.O.OptionalString)
		  // Operation updateAccountSshKey
		  // Update SSH Keys
		  // - 
		  // - parameter sshKey: (form)  (optional, default to Sample)
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountSshKeyCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account/sshkey
		  // - Updates the SSH public key stored on the account. This key can be automatically installed on new VPS and server orders.
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
		  Dim localVarFormParams As New Dictionary
		  If sshKey <> nil Then localVarFormParams.Value("ssh_key") = sshKey
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountSshKey()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountSshKey()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountSshKey()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/sshkey"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountSshKey_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountSshKey_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountSshKeyPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountSshKey_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountSshKeyCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountSshKey_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountSshKeyPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountSshKeyCallback(error, data)
		End Sub
	#tag EndMethod




	#tag Method, Flags = &h0
		Sub UpdateAccountTfa(, _2faGoogleCode As String)
		  // Operation updateAccountTfa
		  // Enable Two-Factor Authentication
		  // - 
		  // - parameter _2faGoogleCode: (form) The 6-digit verification code from your authenticator app. 
		  //
		  // Invokes AccountApiCallbackHandler.UpdateAccountTfaCallback(SuccessTextResponse) on completion. 
		  //
		  // - POST /account/2fa
		  // - Verifies the TOTP code from your authenticator app and enables two-factor authentication on the account. Use `GET /account/2fa` first to retrieve the secret key for app setup.
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
		  Dim localVarFormParams As New Dictionary
		  localVarFormParams.Value("2fa_google_code") = _2faGoogleCode
		  If localVarFormParams.Count > 0 Then localVarHTTPSocket.SetFormData(localVarFormParams)
		  
		  
		  If me.ApiKeysessionIdCookieAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdCookieAuth` before invoking `AccountApi.UpdateAccountTfa()`.")
		  
		  
		  If me.ApiKeyapiKeyAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeyapiKeyAuth` before invoking `AccountApi.UpdateAccountTfa()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("X-API-KEY"), EncodeURLComponent(me.ApiKeyapiKeyAuth))
		  If me.ApiKeysessionIdHeaderAuth = "" Then Raise New OpenAPIClient.OpenAPIClientException(kErrorCannotAuthenticate, "API key is unset. Please assign a value to `AccountApi.ApiKeysessionIdHeaderAuth` before invoking `AccountApi.UpdateAccountTfa()`.")
		  
		  localVarHTTPSocket.SetRequestHeader(EncodeURLComponent("sessionid"), EncodeURLComponent(me.ApiKeysessionIdHeaderAuth))
		  


		  Dim localVarPath As String = "/account/2fa"
		  
		  
		  
		  AddHandler localVarHTTPSocket.PageReceived, addressof me.UpdateAccountTfa_handler
		  AddHandler localVarHTTPSocket.Error, addressof Me.UpdateAccountTfa_error
		  
		  
		  localVarHTTPSocket.SendRequest("POST", Me.BasePath + localVarPath)
		  if localVarHTTPSocket.LastErrorCode <> 0 then
		    Dim localVarException As New OpenAPIClient.OpenAPIClientException(localVarHTTPSocket.LastErrorCode)
			Raise localVarException
		  end if
		  
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Function UpdateAccountTfaPrivateFuncDeserializeResponse(HTTPStatus As Integer, Headers As InternetHeaders, error As OpenAPIClient.OpenAPIClientException, Content As String, ByRef outData As OpenAPIClient.Models.SuccessTextResponse) As Boolean
		  Dim contentType As String = Headers.Value("Content-Type")
		  Dim contentEncoding As TextEncoding = OpenAPIClient.EncodingFromContentType(contentType)
		  Content = DefineEncoding(Content, contentEncoding)
		  
		  If HTTPStatus > 199 and HTTPStatus < 300 then
		    If contentType.LeftB(16) = "application/json" then
		      
			  outData = New OpenAPIClient.Models.SuccessTextResponse
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
		Private Sub UpdateAccountTfa_error(sender As HTTPSecureSocket, Code As Integer)
		  If sender <> nil Then sender.Close()

		  Dim error As New OpenAPIClient.OpenAPIClientException(Code)
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  CallbackHandler.UpdateAccountTfaCallback(error, data)
		End Sub
	#tag EndMethod

	#tag Method, Flags = &h21
		Private Sub UpdateAccountTfa_handler(sender As HTTPSecureSocket, URL As String, HTTPStatus As Integer, Headers As InternetHeaders, Content As String)
		  #Pragma Unused URL
		  

		  If sender <> nil Then sender.Close()
		  
		  Dim error As New OpenAPIClient.OpenAPIClientException(HTTPStatus, "", Content)
		  
		  Dim data As OpenAPIClient.Models.SuccessTextResponse
		  Call UpdateAccountTfaPrivateFuncDeserializeResponse(HTTPStatus, Headers, error, Content, data)
		  
		  CallbackHandler.UpdateAccountTfaCallback(error, data)
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
		CallbackHandler As OpenAPIClient.APIs.AccountApiCallbackHandler
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
