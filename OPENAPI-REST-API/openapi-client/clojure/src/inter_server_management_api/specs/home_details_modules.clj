(ns inter-server-management-api.specs.home-details-modules
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-details-modules-domains :refer :all]
            [inter-server-management-api.specs.home-details-modules-webhosting :refer :all]
            [inter-server-management-api.specs.home-details-modules-vps :refer :all]
            [inter-server-management-api.specs.home-details-modules-licenses :refer :all]
            [inter-server-management-api.specs.home-details-modules-backups :refer :all]
            [inter-server-management-api.specs.home-details-modules-servers :refer :all]
            [inter-server-management-api.specs.home-details-modules-quickservers :refer :all]
            )
  (:import (java.io File)))


(def home-details-modules-data
  {
   (ds/opt :domains) home-details-modules-domains-spec
   (ds/opt :webhosting) home-details-modules-webhosting-spec
   (ds/opt :vps) home-details-modules-vps-spec
   (ds/opt :licenses) home-details-modules-licenses-spec
   (ds/opt :backups) home-details-modules-backups-spec
   (ds/opt :servers) home-details-modules-servers-spec
   (ds/opt :quickservers) home-details-modules-quickservers-spec
   })

(def home-details-modules-spec
  (ds/spec
    {:name ::home-details-modules
     :spec home-details-modules-data}))
