#tag Class
Protected Class VpsTrafficHistoryResponse

	#tag Property, Flags = &h0
		hour As OpenAPIClient.Models.VpsTrafficHistorySectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		day As OpenAPIClient.Models.VpsTrafficHistorySectionResponse
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
			Name="hour"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficHistorySectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="day"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficHistorySectionResponse"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


