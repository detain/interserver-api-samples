#tag Class
Protected Class VpsServiceAddons

	#tag Property, Flags = &h0
		#tag Note
			Whether a cPanel license is active on this VPS.
		#tag EndNote
		has_cpanel As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Whether a DirectAdmin license is active on this VPS.
		#tag EndNote
		has_directadmin As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Whether a Fantastico license is active on this VPS.
		#tag EndNote
		has_fantastico As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Whether a Softaculous license is active on this VPS.
		#tag EndNote
		has_softaculous As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Whether extra disk space has been added to this VPS.
		#tag EndNote
		has_hdspace As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Whether a dedicated IP address is assigned to this VPS.
		#tag EndNote
		dedicated_ip As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of additional IPv4 addresses assigned to this VPS.
		#tag EndNote
		extra_ips() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of additional IPv6 addresses assigned to this VPS.
		#tag EndNote
		extra_ips6() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of IP addresses that have unpaid charges.
		#tag EndNote
		unpaid_ips() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			All IPv4 addresses assigned to this VPS.
		#tag EndNote
		ips() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			All IPv6 addresses assigned to this VPS.
		#tag EndNote
		ips6() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			The add-on service ID for the cPanel license.
		#tag EndNote
		cpanel_id As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Total monthly add-on cost in cents.
		#tag EndNote
		cost As Xoson.O.OptionalInteger
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			List of add-on service IDs active on this VPS.
		#tag EndNote
		ids() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Raw add-on data entries.
		#tag EndNote
		rdata() As String
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
			Name="has_cpanel"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="has_directadmin"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="has_fantastico"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="has_softaculous"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="has_hdspace"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="dedicated_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extra_ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extra_ips6"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="unpaid_ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ips6"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpanel_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ids"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="rdata"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


