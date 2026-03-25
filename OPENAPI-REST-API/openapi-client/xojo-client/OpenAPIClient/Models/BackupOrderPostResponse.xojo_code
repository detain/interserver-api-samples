#tag Class
Protected Class BackupOrderPostResponse

	#tag Property, Flags = &h0
		Escapedcontinue As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		errors() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		total_cost As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		iid As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		iids() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		real_iids() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceId As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		invoice_description As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		cj_params As OpenAPIClient.Models.BackupOrderPostResponseCjParams
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
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="total_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="iid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="iids"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="real_iids"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceId"
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
			Type="BackupOrderPostResponseCjParams"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


