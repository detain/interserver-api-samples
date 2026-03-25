#tag Class
Protected Class WebsiteRow

	#tag Property, Flags = &h0
		#tag Note
			The id of the website.
		#tag EndNote
		website_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The hostname of the website.
		#tag EndNote
		website_hostname As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The repeat invoices cost of the website.
		#tag EndNote
		repeat_invoices_cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The status of the website.
		#tag EndNote
		website_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The services name of the website.
		#tag EndNote
		services_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The comment of the website.
		#tag EndNote
		website_comment As String
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
			Name="website_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="website_hostname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="repeat_invoices_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="website_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="website_comment"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


