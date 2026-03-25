#tag Class
Protected Class VpsTrafficTotalsResposne

	#tag Property, Flags = &h0
		day As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		month As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		year As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		all As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
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
			Name="day"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="month"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="year"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="all"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


