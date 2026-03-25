#tag Class
Protected Class VpsOrderPutResponse

	#tag Property, Flags = &h0
		Escapedcontinue As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		errors() As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		coupon_code As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		service_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		slice_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		service_type As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		repeat_slice_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		original_slice_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		original_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		repeat_service_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		monthly_service_cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		custid As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		os As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		slices As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		platform As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		controlpanel As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		period As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		location As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		version As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		hostname As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		coupon As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		rootpass As Xoson.O.OptionalString
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
			Name="Escapedcontinue"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="errors"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="coupon_code"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="slice_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="repeat_slice_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="original_slice_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="original_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="repeat_service_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="monthly_service_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="slices"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="platform"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="controlpanel"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="period"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="location"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="version"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hostname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="coupon"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rootpass"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


