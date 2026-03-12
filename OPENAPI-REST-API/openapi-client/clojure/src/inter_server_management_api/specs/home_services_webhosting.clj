(ns inter-server-management-api.specs.home-services-webhosting
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-webhosting-links :refer :all]
            )
  (:import (java.io File)))


(def home-services-webhosting-data
  {
   (ds/opt :links) home-services-webhosting-links-spec
   (ds/opt :count) int?
   })

(def home-services-webhosting-spec
  (ds/spec
    {:name ::home-services-webhosting
     :spec home-services-webhosting-data}))
