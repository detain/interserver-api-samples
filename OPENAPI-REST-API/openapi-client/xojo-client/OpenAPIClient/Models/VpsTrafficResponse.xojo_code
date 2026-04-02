#tag Class
Protected Class VpsTrafficResponse

	#tag Property, Flags = &h0
		name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		target As String
	#tag EndProperty


	#tag Property, Flags = &h0
		interval As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		history As OpenAPIClient.Models.VpsTrafficHistoryResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		last As Date
	#tag EndProperty


	#tag Property, Flags = &h0
		times() As Date
	#tag EndProperty


	#tag Property, Flags = &h0
		totals As OpenAPIClient.Models.VpsTrafficTotalsResposne
	#tag EndProperty


	#tag Property, Flags = &h0
		usage As OpenAPIClient.Models.VpsTrafficUsageResponse
	#tag EndProperty


	#tag Property, Flags = &h0
		data() As OpenAPIClient.Models.VpsTrafficDataSectionResponse
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
			Name="name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="target"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="interval"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="history"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficHistoryResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="last"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Date"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="times"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Date"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="totals"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficTotalsResposne"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="usage"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficUsageResponse"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsTrafficDataSectionResponse"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


