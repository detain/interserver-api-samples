#tag Class
Protected Class ViewTicketResponse

	#tag Property, Flags = &h0
		success As Boolean
	#tag EndProperty


	#tag Property, Flags = &h0
		ticket As OpenAPIClient.Models.TicketDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		ticket_custom_fields As OpenAPIClient.Models.TicketCustomFieldDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		ticket_posts As Xoson.O.OptionalTicketPostDetails
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
			Name="success"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticket"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="TicketDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticket_custom_fields"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="TicketCustomFieldDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ticket_posts"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="TicketPostDetails"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


