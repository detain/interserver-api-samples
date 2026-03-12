(ns inter-server-management-api.specs.home-services-servers
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.home-services-servers-links :refer :all]
            )
  (:import (java.io File)))


(def home-services-servers-data
  {
   (ds/opt :links) home-services-servers-links-spec
   (ds/opt :count) int?
   })

(def home-services-servers-spec
  (ds/spec
    {:name ::home-services-servers
     :spec home-services-servers-data}))
