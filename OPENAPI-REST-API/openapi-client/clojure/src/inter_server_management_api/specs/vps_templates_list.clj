(ns inter-server-management-api.specs.vps-templates-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.vps-template-row :refer :all]
            )
  (:import (java.io File)))


(def vps-templates-list-data
  {
   (ds/req :templates) (s/coll-of vps-template-row-spec)
   })

(def vps-templates-list-spec
  (ds/spec
    {:name ::vps-templates-list
     :spec vps-templates-list-data}))
