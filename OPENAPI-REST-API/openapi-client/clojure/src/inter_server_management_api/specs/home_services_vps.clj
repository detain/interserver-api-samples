(ns inter-server-management-api.specs.home-services-vps
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-vps-links :refer :all]
            )
  (:import (java.io File)))


(def home-services-vps-data
  {
   (ds/opt :links) home-services-vps-links-spec
   (ds/opt :count) int?
   })

(def home-services-vps-spec
  (ds/spec
    {:name ::home-services-vps
     :spec home-services-vps-data}))
