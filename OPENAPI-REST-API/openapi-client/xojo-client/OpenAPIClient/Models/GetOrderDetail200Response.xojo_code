#tag Class
Protected Class GetOrderDetail200Response

	#tag Property, Flags = &h0
		packageCosts As OpenAPIClient.Models.GetOrderDetail200ResponsePackageCosts
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes() As OpenAPIClient.Models.GetOrderDetail200ResponseServiceTypesInner
	#tag EndProperty


	#tag Property, Flags = &h0
		ips() As OpenAPIClient.Models.GetOrderDetail200ResponseIpsInner
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
			Name="packageCosts"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetOrderDetail200ResponsePackageCosts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetOrderDetail200ResponseServiceTypesInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="GetOrderDetail200ResponseIpsInner"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


