#tag Class
Protected Class Domain

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.DomainServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes As Dictionary
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.DomainClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.DomainBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrency As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		custCurrencySymbol As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceExtra As OpenAPIClient.Models.DomainBillingExtra
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.BackupExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceType As OpenAPIClient.Models.DomainServiceType
	#tag EndProperty


	#tag Property, Flags = &h0
		contact_details As OpenAPIClient.Models.DomainContactDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		pwarning As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		transfer_info As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		errors As Xoson.O.OptionalBoolean
	#tag EndProperty


	#tag Property, Flags = &h0
		domain_logs() As String
	#tag EndProperty


	#tag Property, Flags = &h0
		allInfo As OpenAPIClient.Models.DomainAllInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		registrarStatus As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		locked As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		whoisPrivacy As Xoson.O.OptionalString
	#tag EndProperty


	#tag Property, Flags = &h0
		autoRenew As Xoson.O.OptionalString
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
			Name="serviceInfo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Dictionary"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainBillingDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custCurrency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="custCurrencySymbol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceExtra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainBillingExtra"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="BackupExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceType"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainServiceType"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="contact_details"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainContactDetails"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="pwarning"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="transfer_info"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="errors"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Boolean"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="domain_logs"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="allInfo"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="DomainAllInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="registrarStatus"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="locked"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="whoisPrivacy"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="autoRenew"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


