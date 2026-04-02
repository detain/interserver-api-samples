#tag Class
Protected Class PlaceScrubOrder201ResponseOrderDetails

	#tag Property, Flags = &h0
		total_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		service_id As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		invoice_id As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		invoice_description As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cj_params As OpenAPIClient.Models.PlaceScrubOrder201ResponseOrderDetailsCjParams
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
			Name="total_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="invoice_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="invoice_description"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cj_params"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="PlaceScrubOrder201ResponseOrderDetailsCjParams"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


