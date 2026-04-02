#tag Class
Protected Class ServerOrder

	#tag Property, Flags = &h0
		form_values As OpenAPIClient.Models.ServerOrderFormValues
	#tag EndProperty


	#tag Property, Flags = &h0
		config_ids As OpenAPIClient.Models.ServerOrderConfigIds
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Number of CPUs for the server order.
		#tag EndNote
		cpu As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		field_label As OpenAPIClient.Models.ServerOrderFieldLabels
	#tag EndProperty


	#tag Property, Flags = &h0
		cpu_li As OpenAPIClient.Models.ServerOrderCpuLi
	#tag EndProperty


	#tag Property, Flags = &h0
		memory_li As OpenAPIClient.Models.ServerOrderMemoryLi
	#tag EndProperty


	#tag Property, Flags = &h0
		bandwidth_li As OpenAPIClient.Models.ServerOrderBandwidthLi
	#tag EndProperty


	#tag Property, Flags = &h0
		ips_li As OpenAPIClient.Models.ServerOrderIpsLi
	#tag EndProperty


	#tag Property, Flags = &h0
		os_li As OpenAPIClient.Models.ServerOrderOsLi
	#tag EndProperty


	#tag Property, Flags = &h0
		cp_li As OpenAPIClient.Models.ServerOrderCpLi
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			RAID options for the server order.
		#tag EndNote
		raid_li() As OpenAPIClient.Models.ServerOrderRAID
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
			Name="form_values"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFormValues"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="config_ids"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderConfigIds"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="field_label"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderFieldLabels"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderCpuLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="memory_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderMemoryLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bandwidth_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderBandwidthLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderIpsLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderOsLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cp_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderCpLi"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="raid_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerOrderRAID"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


