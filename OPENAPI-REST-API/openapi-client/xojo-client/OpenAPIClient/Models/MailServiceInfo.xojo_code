#tag Class
Protected Class MailServiceInfo

	#tag Property, Flags = &h0
		#tag Note
			The ID of the mail service.
		#tag EndNote
		mail_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The type of mail service.
		#tag EndNote
		mail_type As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The currency of the mail service.
		#tag EndNote
		mail_currency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The order date of the mail service.
		#tag EndNote
		mail_order_date As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The customer ID associated with the mail service.
		#tag EndNote
		mail_custid As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The mail quota for the service.
		#tag EndNote
		mail_quota As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The status of the mail service.
		#tag EndNote
		mail_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The invoice ID of the mail service.
		#tag EndNote
		mail_invoice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The username associated with the mail service.
		#tag EndNote
		mail_username As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The IP address associated with the mail service.
		#tag EndNote
		mail_ip As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The coupon associated with the mail service.
		#tag EndNote
		mail_coupon As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Additional information for the mail service.
		#tag EndNote
		mail_extra As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The server status of the mail service.
		#tag EndNote
		mail_server_status As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Additional comments for the mail service.
		#tag EndNote
		mail_comment As Xoson.O.OptionalString
	#tag EndProperty





	#tag ViewBehavior
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
			Name="mail_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_currency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_order_date"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_quota"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_invoice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_username"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_coupon"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_extra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_server_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mail_comment"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


