(ns inter-server-management-api.specs.home-services-licenses
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-licenses-links :refer :all]
            )
  (:import (java.io File)))


(def home-services-licenses-data
  {
   (ds/opt :links) home-services-licenses-links-spec
   (ds/opt :count) int?
   })

(def home-services-licenses-spec
  (ds/spec
    {:name ::home-services-licenses
     :spec home-services-licenses-data}))
