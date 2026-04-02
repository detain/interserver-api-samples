#tag Class
Protected Class WebsitesOrderPackagesInfo

	#tag Property, Flags = &h0
		#tag Note
			The ID of the package.
		#tag EndNote
		services_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The name of the package.
		#tag EndNote
		services_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The cost of the package.
		#tag EndNote
		services_cost As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The category of the package.
		#tag EndNote
		services_category As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Indicates if the package is buyable (1 for yes, 0 for no).
		#tag EndNote
		services_buyable As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The type of the package.
		#tag EndNote
		services_type As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The module of the package.
		#tag EndNote
		services_module As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Description of the package.
		#tag EndNote
		services_description As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Additional field 1 for the package.
		#tag EndNote
		services_field1 As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Additional field 2 for the package.
		#tag EndNote
		services_field2 As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			HTML content for the package.
		#tag EndNote
		services_html As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			URL for more information about the package.
		#tag EndNote
		services_moreinfo_url As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Indicates if the package is hidden (1 for yes, 0 for no).
		#tag EndNote
		services_hidden As Xoson.O.OptionalString
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
			Name="services_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_category"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_buyable"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_module"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_description"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_field1"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_field2"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_html"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_moreinfo_url"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services_hidden"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


