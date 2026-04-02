#tag Class
Protected Class LicenseServiceInfo

	#tag Property, Flags = &h0
		#tag Note
			License ID
		#tag EndNote
		license_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License type
		#tag EndNote
		license_type As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License currency
		#tag EndNote
		license_currency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License order date
		#tag EndNote
		license_order_date As Date
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Customer ID
		#tag EndNote
		license_custid As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License IP
		#tag EndNote
		license_ip As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License status
		#tag EndNote
		license_status As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License invoice
		#tag EndNote
		license_invoice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License coupon
		#tag EndNote
		license_coupon As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License hostname
		#tag EndNote
		license_hostname As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			License key
		#tag EndNote
		license_key As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Additional license information
		#tag EndNote
		license_extra As Xoson.O.OptionalString
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
			Name="license_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_type"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_currency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_order_date"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Date"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_custid"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_ip"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_status"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_invoice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_coupon"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_hostname"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_key"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="license_extra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


