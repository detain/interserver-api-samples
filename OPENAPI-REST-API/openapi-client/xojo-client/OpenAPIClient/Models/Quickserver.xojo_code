#tag Class
Protected Class Quickserver

	#tag Property, Flags = &h0
		serviceInfo As OpenAPIClient.Models.QuickserverServiceInfo
	#tag EndProperty


	#tag Property, Flags = &h0
		client_links() As OpenAPIClient.Models.QuickserverClientLink
	#tag EndProperty


	#tag Property, Flags = &h0
		billingDetails As OpenAPIClient.Models.QuickserverBillingDetails
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency of the customer
		#tag EndNote
		custCurrency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency symbol of the customer
		#tag EndNote
		custCurrencySymbol As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceMaster As OpenAPIClient.Models.QuickserverServiceMaster
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Package name
		#tag EndNote
		package As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Operating system template
		#tag EndNote
		os_template As String
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceExtra As OpenAPIClient.Models.QuickserverServiceExtra
	#tag EndProperty


	#tag Property, Flags = &h0
		extraInfoTables As OpenAPIClient.Models.QuickserverExtraInfoTables
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			CPU graph data
		#tag EndNote
		cpu_graph_data As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Bandwidth x-axis data
		#tag EndNote
		bandwidth_xaxis As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Bandwidth y-axis data
		#tag EndNote
		bandwidth_yaxis As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Module information
		#tag EndNote
		Escapedmodule As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Authentication token
		#tag EndNote
		token As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Used disk space
		#tag EndNote
		service_disk_used As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Total disk space
		#tag EndNote
		service_disk_total As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Disk usage percentage
		#tag EndNote
		disk_percentage As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Memory information
		#tag EndNote
		memory As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			HDD information
		#tag EndNote
		hdd As String
	#tag EndProperty


	#tag Property, Flags = &h0
		service_overview_extra() As String
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
			Type="QuickserverServiceInfo"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="client_links"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverClientLink"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="billingDetails"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverBillingDetails"
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
			Name="serviceMaster"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverServiceMaster"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="package"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="os_template"
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
			Type="QuickserverServiceExtra"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="extraInfoTables"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="QuickserverExtraInfoTables"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpu_graph_data"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bandwidth_xaxis"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bandwidth_yaxis"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Escapedmodule"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="token"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_disk_used"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_disk_total"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="disk_percentage"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="memory"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hdd"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="service_overview_extra"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


