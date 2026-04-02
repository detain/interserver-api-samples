#tag Class
Protected Class MailSchemaExtraInfoTables

	#tag Property, Flags = &h0
		mail As OpenAPIClient.Models.MailExtraInfoTable
	#tag EndProperty


	#tag Property, Flags = &h0
		tutorials As OpenAPIClient.Models.MailTutorialsTable
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
			Name="mail"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailExtraInfoTable"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="tutorials"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailTutorialsTable"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


