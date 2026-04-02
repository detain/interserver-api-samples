#tag Class
Protected Class CpuWithDefaults

	#tag Property, Flags = &h0
		id As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		short_desc As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		long_desc As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		type As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		speed As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		num_cores As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		num_cpus As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		benchmark As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		monthly_price As Xoson.O.OptionalDouble
	#tag EndProperty


	#tag Property, Flags = &h0
		monthly_price_display As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		max_ram As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		min_ram As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		max_lff As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		max_sff As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		max_nve As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		visible As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		active As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		memory_det As OpenAPIClient.Models.MemoryOption
	#tag EndProperty


	#tag Property, Flags = &h0
		hd_det As OpenAPIClient.Models.HardDrive
	#tag EndProperty


	#tag Property, Flags = &h0
		monthly_fee As Xoson.O.OptionalString
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
			Name="short_desc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="long_desc"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="speed"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="num_cores"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="num_cpus"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="benchmark"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="monthly_price"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="monthly_price_display"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="max_ram"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="min_ram"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="max_lff"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="max_sff"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="max_nve"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="visible"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="active"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="memory_det"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="MemoryOption"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hd_det"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="HardDrive"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="monthly_fee"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


