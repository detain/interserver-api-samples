(ns inter-server-management-api.specs.home-services
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-domains :refer :all]
            [inter-server-management-api.specs.home-services-webhosting :refer :all]
            [inter-server-management-api.specs.home-services-vps :refer :all]
            [inter-server-management-api.specs.home-services-licenses :refer :all]
            [inter-server-management-api.specs.home-services-servers :refer :all]
            [inter-server-management-api.specs.home-services-backups :refer :all]
            )
  (:import (java.io File)))


(def home-services-data
  {
   (ds/opt :domains) home-services-domains-spec
   (ds/opt :webhosting) home-services-webhosting-spec
   (ds/opt :vps) home-services-vps-spec
   (ds/opt :licenses) home-services-licenses-spec
   (ds/opt :servers) home-services-servers-spec
   (ds/opt :backups) home-services-backups-spec
   })

(def home-services-spec
  (ds/spec
    {:name ::home-services
     :spec home-services-data}))
