#tag Class
Protected Class VpsTrafficUsageResponse

	#tag Property, Flags = &h0
		current As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		peak As OpenAPIClient.Models.VpsTrafficTotalsSectionResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		average As OpenAPIClient.Models.VpsTrafficUsageAverageResponse
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
			Name="current"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="peak"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsSectionResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="average"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficUsageAverageResponse"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


