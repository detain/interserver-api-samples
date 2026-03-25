#tag Class
Protected Class VpsOrder

	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice SSD OVZ
		#tag EndNote
		vpsSliceSsdOvzCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice OVZ
		#tag EndNote
		vpsSliceOvzCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice SSD Virtuozzo
		#tag EndNote
		vpsSliceSsdVirtuozzoCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice Virtuozzo
		#tag EndNote
		vpsSliceVirtuozzoCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice HyperV
		#tag EndNote
		vpsSliceHypervCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice VMware
		#tag EndNote
		vpsSliceVmwareCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice LXC
		#tag EndNote
		vpsSliceLxcCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice Xen
		#tag EndNote
		vpsSliceXenCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice KVM L
		#tag EndNote
		vpsSliceKvmLCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice KVM Storage
		#tag EndNote
		vpsSliceKvmStorageCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS in NY
		#tag EndNote
		vpsNyCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of VPS Slice KVM Windows
		#tag EndNote
		vpsSliceKvmWCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of cPanel
		#tag EndNote
		cpanelCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Cost of DirectAdmin (DA)
		#tag EndNote
		daCost As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			RAM for VPS Slice
		#tag EndNote
		ramSlice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Hard Disk for VPS Slice
		#tag EndNote
		hdSlice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Storage Hard Disk for VPS Slice
		#tag EndNote
		hdStorageSlice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Bandwidth for VPS Slice
		#tag EndNote
		bwSlice As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Bandwidth Type
		#tag EndNote
		bwType As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Total Bandwidth
		#tag EndNote
		bwTotal As Double
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Maximum Slices
		#tag EndNote
		maxSlices As String
	#tag EndProperty


	#tag Property, Flags = &h0
		platformPackages As OpenAPIClient.Models.VpsOrderPlatformPackages
	#tag EndProperty


	#tag Property, Flags = &h0
		platformNames As OpenAPIClient.Models.VpsOrderPlatformNames
	#tag EndProperty


	#tag Property, Flags = &h0
		packageCosts As OpenAPIClient.Models.VpsOrderPackageCosts
	#tag EndProperty


	#tag Property, Flags = &h0
		locationStock As OpenAPIClient.Models.VpsOrderLocationStock
	#tag EndProperty


	#tag Property, Flags = &h0
		locationNames As OpenAPIClient.Models.VpsOrderLocationNames
	#tag EndProperty


	#tag Property, Flags = &h0
		osNames As OpenAPIClient.Models.VpsOrderOsNames
	#tag EndProperty


	#tag Property, Flags = &h0
		templates As OpenAPIClient.Models.VpsOrderTemplates
	#tag EndProperty


	#tag Property, Flags = &h0
		serviceTypes As OpenAPIClient.Models.VpsOrderServiceTypes
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency
		#tag EndNote
		currency As String
	#tag EndProperty


	#tag Property, Flags = &h0
		#tag Note
			Currency Symbol
		#tag EndNote
		currencySymbol As String
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
			Name="vpsSliceSsdOvzCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceOvzCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceSsdVirtuozzoCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceVirtuozzoCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceHypervCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceVmwareCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceLxcCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceXenCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceKvmLCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceKvmStorageCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsNyCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="vpsSliceKvmWCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="cpanelCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="daCost"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="ramSlice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hdSlice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="hdStorageSlice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bwSlice"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bwType"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="bwTotal"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="Double"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="maxSlices"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="platformPackages"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderPlatformPackages"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="platformNames"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderPlatformNames"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="packageCosts"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderPackageCosts"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="locationStock"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderLocationStock"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="locationNames"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderLocationNames"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="osNames"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderOsNames"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="templates"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderTemplates"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="serviceTypes"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="VpsOrderServiceTypes"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currency"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="currencySymbol"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass


