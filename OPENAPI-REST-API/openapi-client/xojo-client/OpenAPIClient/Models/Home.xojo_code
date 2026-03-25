#tag Class
Protected Class Home

	#tag Property, Flags = &h0
		#tag Note
			Last login IP.
		#tag EndNote
		last_login_ip As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Last login time.
		#tag EndNote
		last_login As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency symbol.
		#tag EndNote
		currency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Amount with currency.
		#tag EndNote
		amount As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Number of invoices.
		#tag EndNote
		invoice_list As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Balance with currency.
		#tag EndNote
		balance As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Users full name.
		#tag EndNote
		full_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			User email address.
		#tag EndNote
		email As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of tickets.
		#tag EndNote
		tickets() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		ticketStatus As OpenAPIClient.Models.HomeTicketStatus
	#tag EndProperty


	#tag Property, Flags = &h0
		ticketStatusView As OpenAPIClient.Models.HomeTicketStatusView
	#tag EndProperty


	#tag Property, Flags = &h0
		details As OpenAPIClient.Models.HomeDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		services As OpenAPIClient.Models.HomeServices
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Affiliate amount with currency.
		#tag EndNote
		AFFILIATE_AMOUNT As String
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
			Name="last_login_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="last_login"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="amount"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="invoice_list"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="balance"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="full_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="email"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tickets"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticketStatus"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeTicketStatus"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticketStatusView"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeTicketStatusView"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="details"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HomeServices"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="AFFILIATE_AMOUNT"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


