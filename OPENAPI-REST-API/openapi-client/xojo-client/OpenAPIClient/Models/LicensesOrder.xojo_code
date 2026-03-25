#tag Class
Protected Class LicensesOrder

	#tag Property, Flags = &h0
		serviceCategories As OpenAPIClient.Models.LicensesOrderServiceCategories
	#tag EndProperty


	#tag Property, Flags = &h0
		packageCosts As OpenAPIClient.Models.LicensesOrderPackageCosts
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes As OpenAPIClient.Models.LicensesOrderServiceTypes
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
			Name="serviceCategories"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicensesOrderServiceCategories"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="packageCosts"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicensesOrderPackageCosts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="LicensesOrderServiceTypes"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


