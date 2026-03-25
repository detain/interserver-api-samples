#tag Class
Protected Class AssetServer

	#tag Property, Flags = &h0
		id As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		Region As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		price As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		CPU() As OpenAPIClient.Models.AssetServerCPUInner
	#tag EndProperty


	#tag Property, Flags = &h0
		Memory() As OpenAPIClient.Models.AssetServerCPUInner
	#tag EndProperty


	#tag Property, Flags = &h0
		Bandwidth() As OpenAPIClient.Models.AssetServerCPUInner
	#tag EndProperty


	#tag Property, Flags = &h0
		IPs() As OpenAPIClient.Models.AssetServerCPUInner
	#tag EndProperty


	#tag Property, Flags = &h0
		HD As Dictionary
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
			Name="id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Region"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="price"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="CPU"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AssetServerCPUInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Memory"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AssetServerCPUInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Bandwidth"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AssetServerCPUInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="IPs"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="AssetServerCPUInner"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="HD"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


