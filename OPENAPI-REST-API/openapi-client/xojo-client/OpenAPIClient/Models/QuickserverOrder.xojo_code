#tag Class
Protected Class QuickserverOrder

	#tag Property, Flags = &h0
		#tag Note
			Quickserver ID.
		#tag EndNote
		qs_id As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		server_details As OpenAPIClient.Models.QuickserverOrderServerDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		templates As OpenAPIClient.Models.QuickserverOrderTemplates
	#tag EndProperty


	#tag Property, Flags = &h0
		version As OpenAPIClient.Models.QuickserverOrderVersion
	#tag EndProperty


	#tag Property, Flags = &h0
		distro_sel As OpenAPIClient.Models.QuickserverOrderDistroSel
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
			Name="qs_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="server_details"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverOrderServerDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="templates"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverOrderTemplates"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="version"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverOrderVersion"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="distro_sel"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverOrderDistroSel"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


