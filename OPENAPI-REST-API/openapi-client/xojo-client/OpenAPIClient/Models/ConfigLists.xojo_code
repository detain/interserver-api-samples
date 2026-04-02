#tag Class
Protected Class ConfigLists

	#tag Property, Flags = &h0
		cpu_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		memory_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		hd_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		bandwidth_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		ips_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		os_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		cp_li As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		raid_li() As OpenAPIClient.Models.RaidOption
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
			Name="cpu_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="memory_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hd_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bandwidth_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cp_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="raid_li"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="RaidOption"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


