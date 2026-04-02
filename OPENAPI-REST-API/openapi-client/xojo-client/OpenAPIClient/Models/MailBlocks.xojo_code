#tag Class
Protected Class MailBlocks

	#tag Property, Flags = &h0
		local() As OpenAPIClient.Models.MailBlockClickHouse
	#tag EndProperty


	#tag Property, Flags = &h0
		mbtrap() As OpenAPIClient.Models.MailBlockClickHouse
	#tag EndProperty


	#tag Property, Flags = &h0
		subject() As OpenAPIClient.Models.MailBlockRspamd
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
			Name="local"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailBlockClickHouse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mbtrap"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailBlockClickHouse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="subject"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MailBlockRspamd"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


