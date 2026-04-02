#tag Class
Protected Class VpsRow

	#tag Property, Flags = &h0
		#tag Note
			The id of the vps.
		#tag EndNote
		vps_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The name of the vps.
		#tag EndNote
		vps_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The repeat invoices cost of the vps.
		#tag EndNote
		repeat_invoices_cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The hostname of the vps.
		#tag EndNote
		vps_hostname As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The ip of the vps.
		#tag EndNote
		vps_ip As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The status of the vps.
		#tag EndNote
		vps_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The services name of the vps.
		#tag EndNote
		services_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The comment of the vps.
		#tag EndNote
		vps_comment As String
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
			Name="vps_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vps_name"
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
			Name="vps_hostname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vps_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vps_status"
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
			Name="vps_comment"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


