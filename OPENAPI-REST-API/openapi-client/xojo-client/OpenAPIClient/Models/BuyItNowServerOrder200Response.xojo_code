#tag Class
Protected Class BuyItNowServerOrder200Response

	#tag Property, Flags = &h0
		bandwidth() As OpenAPIClient.Models.BuyItNowServerOrder200ResponseBandwidthInner
	#tag EndProperty


	#tag Property, Flags = &h0
		ips() As OpenAPIClient.Models.BuyItNowServerOrder200ResponseIpsInner
	#tag EndProperty


	#tag Property, Flags = &h0
		os() As OpenAPIClient.Models.BuyItNowServerOrder200ResponseOsInner
	#tag EndProperty


	#tag Property, Flags = &h0
		cp() As OpenAPIClient.Models.BuyItNowServerOrder200ResponseCpInner
	#tag EndProperty


	#tag Property, Flags = &h0
		raid() As OpenAPIClient.Models.BuyItNowServerOrder200ResponseRaidInner
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
			Name="bandwidth"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BuyItNowServerOrder200ResponseBandwidthInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BuyItNowServerOrder200ResponseIpsInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BuyItNowServerOrder200ResponseOsInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BuyItNowServerOrder200ResponseCpInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="raid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BuyItNowServerOrder200ResponseRaidInner"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


