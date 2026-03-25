#tag Class
Protected Class ServerAsset

	#tag Property, Flags = &h0
		#tag Note
			Unique identifier for the asset.
		#tag EndNote
		id As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Order identifier for the asset.
		#tag EndNote
		order_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Hostname associated with the asset.
		#tag EndNote
		hostname As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Status of the asset.
		#tag EndNote
		status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Primary IPv4 address of the asset.
		#tag EndNote
		primary_ipv4 As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Primary IPv6 address of the asset.
		#tag EndNote
		primary_ipv6 As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Datacenter identifier for the asset.
		#tag EndNote
		datacenter As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Type identifier for the asset.
		#tag EndNote
		type_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Asset tag associated with the asset.
		#tag EndNote
		asset_tag As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Rack identifier for the asset.
		#tag EndNote
		rack As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Row identifier for the asset.
		#tag EndNote
		row As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Column identifier for the asset.
		#tag EndNote
		col As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Starting unit identifier for the asset.
		#tag EndNote
		unit_start As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Ending unit identifier for the asset.
		#tag EndNote
		unit_end As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Subunit identifier for the asset.
		#tag EndNote
		unit_sub As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI MAC address associated with the asset.
		#tag EndNote
		ipmi_mac As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI IP address associated with the asset.
		#tag EndNote
		ipmi_ip As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI working status associated with the asset.
		#tag EndNote
		ipmi_working As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Company associated with the asset.
		#tag EndNote
		company As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Comments associated with the asset.
		#tag EndNote
		comments As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Make of the asset.
		#tag EndNote
		make As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Model of the asset.
		#tag EndNote
		model As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Description of the asset.
		#tag EndNote
		description As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Customer identifier for the asset.
		#tag EndNote
		customer_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			External identifier for the asset.
		#tag EndNote
		external_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Billing status of the asset.
		#tag EndNote
		billing_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Overdue status of the asset.
		#tag EndNote
		overdue As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Asset identifier for the asset.
		#tag EndNote
		asset_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Name of the asset.
		#tag EndNote
		asset_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Rack identifier for the asset.
		#tag EndNote
		rack_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Rack name associated with the asset.
		#tag EndNote
		rack_name As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Location of the rack associated with the asset.
		#tag EndNote
		rack_location As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Size of the rack associated with the asset.
		#tag EndNote
		rack_size As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			X-coordinate of the asset within the rack.
		#tag EndNote
		rack_x As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Y-coordinate of the asset within the rack.
		#tag EndNote
		rack_y As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of switchports associated with the asset.
		#tag EndNote
		switchports() As Integer
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of VLANs associated with the asset.
		#tag EndNote
		vlans() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of IPv6 VLANs associated with the asset.
		#tag EndNote
		vlans6() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		lease As OpenAPIClient.Models.ServerLease
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			MAC address associated with the asset.
		#tag EndNote
		mac As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI admin username associated with the asset.
		#tag EndNote
		ipmi_admin_username As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI admin password associated with the asset.
		#tag EndNote
		ipmi_admin_password As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI client username associated with the asset.
		#tag EndNote
		ipmi_client_username As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI client password associated with the asset.
		#tag EndNote
		ipmi_client_password As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			IPMI update status associated with the asset.
		#tag EndNote
		ipmi_updated As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Timestamp of asset creation.
		#tag EndNote
		create_timestamp As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Timestamp of asset update.
		#tag EndNote
		update_timestamp As Variant
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Comment associated with the asset.
		#tag EndNote
		comment As Variant
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
			Name="order_id"
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
			Name="status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="primary_ipv4"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="primary_ipv6"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="datacenter"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="type_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="asset_tag"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="row"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="col"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="unit_start"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="unit_end"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="unit_sub"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_mac"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_working"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="company"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="comments"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="make"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="model"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="description"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="customer_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="external_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billing_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="overdue"
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
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="asset_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_name"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_location"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_size"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_x"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rack_y"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="switchports"
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
		#tag ViewProperty
			Name="lease"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="ServerLease"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="mac"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_admin_username"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_admin_password"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_client_username"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_client_password"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ipmi_updated"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="create_timestamp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="update_timestamp"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="comment"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Variant"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


