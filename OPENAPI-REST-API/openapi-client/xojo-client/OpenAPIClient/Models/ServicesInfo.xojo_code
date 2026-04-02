#tag Class
Protected Class ServicesInfo

	#tag Property, Flags = &h0
		modules As Modules
	#tag EndProperty


	#tag Property, Flags = &h0
		services As Services
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes As ServiceTypes
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceCategories As ServiceCategories
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
			Name="modules"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Modules"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="services"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Services"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServiceTypes"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceCategories"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServiceCategories"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


