#tag Class
Protected Class ServerSwitchport

	#tag Property, Flags = &h0
		#tag Note
			Unique identifier for the switchport.
		#tag EndNote
		switchport_id As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Unique identifier for the switch associated with the switchport.
		#tag EndNote
		switch_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Name of the switch associated with the switchport.
		#tag EndNote
		switch As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Port name on the switch.
		#tag EndNote
		port As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Blade name associated with the port.
		#tag EndNote
		blade As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Port identifier.
		#tag EndNote
		justport As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Identifier for the graph associated with the switchport.
		#tag EndNote
		graph_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Unique identifier of the asset associated with the switchport.
		#tag EndNote
		asset_id As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of VLANs associated with the switchport.
		#tag EndNote
		vlans() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of IPv6 VLANs associated with the switchport.
		#tag EndNote
		vlans6() As String
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
			Name="switchport_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="switch_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="switch"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="port"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="blade"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="justport"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="graph_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="asset_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vlans"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vlans6"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


