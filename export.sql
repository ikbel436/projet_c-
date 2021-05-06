--------------------------------------------------------
--  Fichier cr�� - jeudi-mai-06-2021   
--------------------------------------------------------
DROP TABLE "MALAK"."CATEGORIES";
DROP TABLE "MALAK"."EMPLOYES";
DROP TABLE "MALAK"."ENTRAINEUR";
DROP TABLE "MALAK"."EVENT";
DROP TABLE "MALAK"."FOURNISSEURS";
DROP TABLE "MALAK"."JOUEURS";
DROP TABLE "MALAK"."PRODUIT";
DROP TABLE "MALAK"."SPONSOR";
DROP TABLE "MALAK"."SPORT";
--------------------------------------------------------
--  DDL for Table CATEGORIES
--------------------------------------------------------

  CREATE TABLE "MALAK"."CATEGORIES" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"DESCRIPTION" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table EMPLOYES
--------------------------------------------------------

  CREATE TABLE "MALAK"."EMPLOYES" 
   (	"IDE" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(20 BYTE), 
	"TEL" NUMBER, 
	"ROLE" VARCHAR2(20 BYTE), 
	"SALAIRE" NUMBER, 
	"PHOTO" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table ENTRAINEUR
--------------------------------------------------------

  CREATE TABLE "MALAK"."ENTRAINEUR" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(20 BYTE), 
	"TEL" NUMBER, 
	"DAT" VARCHAR2(20 BYTE), 
	"IDS" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table EVENT
--------------------------------------------------------

  CREATE TABLE "MALAK"."EVENT" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"LIEU" VARCHAR2(20 BYTE), 
	"NB" NUMBER, 
	"PRIX" NUMBER, 
	"DAT" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table FOURNISSEURS
--------------------------------------------------------

  CREATE TABLE "MALAK"."FOURNISSEURS" 
   (	"IDF" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(20 BYTE), 
	"TEL" NUMBER, 
	"IDP" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table JOUEURS
--------------------------------------------------------

  CREATE TABLE "MALAK"."JOUEURS" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRENOM" VARCHAR2(20 BYTE), 
	"DATE_N" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(20 BYTE), 
	"TEL" NUMBER, 
	"IDC" NUMBER, 
	"IDS" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table PRODUIT
--------------------------------------------------------

  CREATE TABLE "MALAK"."PRODUIT" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"PRIX" FLOAT(126), 
	"NOMBRE" NUMBER, 
	"MARQUE" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table SPONSOR
--------------------------------------------------------

  CREATE TABLE "MALAK"."SPONSOR" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"TYPE" VARCHAR2(20 BYTE), 
	"ADRESSE" VARCHAR2(20 BYTE), 
	"EMAIL" VARCHAR2(20 BYTE), 
	"TEL" NUMBER, 
	"IDE" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Table SPORT
--------------------------------------------------------

  CREATE TABLE "MALAK"."SPORT" 
   (	"ID" NUMBER, 
	"NOM" VARCHAR2(20 BYTE), 
	"NB" NUMBER, 
	"DAT" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into MALAK.CATEGORIES
SET DEFINE OFF;
Insert into MALAK.CATEGORIES (ID,NOM,DESCRIPTION) values (1,'loukti','malakkkkk');
Insert into MALAK.CATEGORIES (ID,NOM,DESCRIPTION) values (2,'validationikbel','pppppppppp');
Insert into MALAK.CATEGORIES (ID,NOM,DESCRIPTION) values (3,'malakmalak','haya');
REM INSERTING into MALAK.EMPLOYES
SET DEFINE OFF;
Insert into MALAK.EMPLOYES (IDE,NOM,PRENOM,EMAIL,TEL,ROLE,SALAIRE,PHOTO) values (1,'malak','mlml','malak@mml.tn',6598456,'mmm',950,null);
Insert into MALAK.EMPLOYES (IDE,NOM,PRENOM,EMAIL,TEL,ROLE,SALAIRE,PHOTO) values (2,'samar','samar','samar@esprit.tn',12569876,'mmmm',1000,null);
REM INSERTING into MALAK.ENTRAINEUR
SET DEFINE OFF;
Insert into MALAK.ENTRAINEUR (ID,NOM,PRENOM,EMAIL,TEL,DAT,IDS) values (1,'malak','malakkk','mal@gmail.com',1236,'12',4);
Insert into MALAK.ENTRAINEUR (ID,NOM,PRENOM,EMAIL,TEL,DAT,IDS) values (2,'malaktawatw','validation','twtwtw@tw.com',15,'21/05/2021',7);
Insert into MALAK.ENTRAINEUR (ID,NOM,PRENOM,EMAIL,TEL,DAT,IDS) values (3,'hhhh','bbb','malak@esprit.tn',656,'12/02/2020',3);
Insert into MALAK.ENTRAINEUR (ID,NOM,PRENOM,EMAIL,TEL,DAT,IDS) values (4,'mm','bb','mm@mm.com',2322,'12/02/2002',3);
Insert into MALAK.ENTRAINEUR (ID,NOM,PRENOM,EMAIL,TEL,DAT,IDS) values (5,'ekher','mara','mm@mm.com',132659,'06/05/2021',1);
REM INSERTING into MALAK.EVENT
SET DEFINE OFF;
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (2,'malak_event','tunisie',120,60,'27/03/2021');
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (3,'malak_evenement','sousse',65,15,'27/03/2021');
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (5,'validationtwtw','tubbis',15,165,'8/04/2021');
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (0,null,null,0,0,null);
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (1,'malaktest','tunisie',16,87,'08/04/2022');
Insert into MALAK.EVENT (ID,NOM,LIEU,NB,PRIX,DAT) values (4,'malaktawa','tunisia',1002,98,'05/05/2021');
REM INSERTING into MALAK.FOURNISSEURS
SET DEFINE OFF;
Insert into MALAK.FOURNISSEURS (IDF,NOM,PRENOM,EMAIL,TEL,IDP) values (1,'malak','malak','malak@malak.tn',12345678,1);
Insert into MALAK.FOURNISSEURS (IDF,NOM,PRENOM,EMAIL,TEL,IDP) values (2,'aaaabb','aaaaa','malak@esprit.tn',12345698,1);
REM INSERTING into MALAK.JOUEURS
SET DEFINE OFF;
Insert into MALAK.JOUEURS (ID,NOM,PRENOM,DATE_N,EMAIL,TEL,IDC,IDS) values (1,'malaaakouki','maaaaaaaaalaaaaak','30/04/2021','malak@esprit.tn',1546,2,4);
Insert into MALAK.JOUEURS (ID,NOM,PRENOM,DATE_N,EMAIL,TEL,IDC,IDS) values (2,'malakvalidation','validation','05/05/2021','malak@malak',659,3,2);
REM INSERTING into MALAK.PRODUIT
SET DEFINE OFF;
Insert into MALAK.PRODUIT (ID,NOM,PRIX,NOMBRE,MARQUE) values (1,'malak',25,123,'malak');
REM INSERTING into MALAK.SPONSOR
SET DEFINE OFF;
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (2,'test','materiel','tounis','sp@sp',1236,null);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (8,'malak','publicite','tw','malak@esprit.tn',12365,5);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (2,'test','materiel','tounis','sp@sp',1236,3);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (3,'testmalak','marketing','tounismalak','pub@gmail.com',12365,null);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (5,'malak','finance','tunis','mmm@bbb.com',12365,null);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (9,'hayatwtwtw','materiel','darna','twtwtw@tw.com',65898,4);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (6,'malakben','materiel','tunis','malak@esprit.tn',9564893,null);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (3,'testmalak','marketing','tounismalak','pub@gmail.com',12365,5);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (5,'malak','finance','tunis','mmm@bbb.com',12365,5);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (6,'testtest','finance','test','malak@test.com',123,3);
Insert into MALAK.SPONSOR (ID,NOM,TYPE,ADRESSE,EMAIL,TEL,IDE) values (7,'amank','publicite','amaan','malak@esprit.tn',698,5);
REM INSERTING into MALAK.SPORT
SET DEFINE OFF;
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (4,'test',1,'12/08/2020');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (2,'foot',2,'30/03/2021');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (3,'basket',5,'30/03/2021');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (1,'aziz',8,'19/02/2020');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (6,'foot',5,'26/04/2021');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (5,'validation',1,'17');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (7,'hand',3,'05/05/2021');
Insert into MALAK.SPORT (ID,NOM,NB,DAT) values (8,'mmbbnn',3,'30/02/2020');
--------------------------------------------------------
--  DDL for Index CATEGORIES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "MALAK"."CATEGORIES_PK" ON "MALAK"."CATEGORIES" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index EMPLOYES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "MALAK"."EMPLOYES_PK" ON "MALAK"."EMPLOYES" ("IDE") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index EVENT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "MALAK"."EVENT_PK" ON "MALAK"."EVENT" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index PRODUIT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "MALAK"."PRODUIT_PK" ON "MALAK"."PRODUIT" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  DDL for Index SPORT_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "MALAK"."SPORT_PK" ON "MALAK"."SPORT" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table CATEGORIES
--------------------------------------------------------

  ALTER TABLE "MALAK"."CATEGORIES" ADD CONSTRAINT "CATEGORIES_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "MALAK"."CATEGORIES" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table EMPLOYES
--------------------------------------------------------

  ALTER TABLE "MALAK"."EMPLOYES" ADD CONSTRAINT "EMPLOYES_PK" PRIMARY KEY ("IDE")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "MALAK"."EMPLOYES" MODIFY ("IDE" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table ENTRAINEUR
--------------------------------------------------------

  ALTER TABLE "MALAK"."ENTRAINEUR" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table EVENT
--------------------------------------------------------

  ALTER TABLE "MALAK"."EVENT" MODIFY ("PRIX" NOT NULL ENABLE);
  ALTER TABLE "MALAK"."EVENT" MODIFY ("NB" NOT NULL ENABLE);
  ALTER TABLE "MALAK"."EVENT" ADD CONSTRAINT "EVENT_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "MALAK"."EVENT" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table FOURNISSEURS
--------------------------------------------------------

  ALTER TABLE "MALAK"."FOURNISSEURS" MODIFY ("IDF" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table JOUEURS
--------------------------------------------------------

  ALTER TABLE "MALAK"."JOUEURS" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table PRODUIT
--------------------------------------------------------

  ALTER TABLE "MALAK"."PRODUIT" ADD CONSTRAINT "PRODUIT_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "MALAK"."PRODUIT" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table SPONSOR
--------------------------------------------------------

  ALTER TABLE "MALAK"."SPONSOR" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Constraints for Table SPORT
--------------------------------------------------------

  ALTER TABLE "MALAK"."SPORT" ADD CONSTRAINT "SPORT_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 COMPUTE STATISTICS 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "MALAK"."SPORT" MODIFY ("ID" NOT NULL ENABLE);
--------------------------------------------------------
--  Ref Constraints for Table ENTRAINEUR
--------------------------------------------------------

  ALTER TABLE "MALAK"."ENTRAINEUR" ADD CONSTRAINT "FK_ID" FOREIGN KEY ("IDS")
	  REFERENCES "MALAK"."SPORT" ("ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table FOURNISSEURS
--------------------------------------------------------

  ALTER TABLE "MALAK"."FOURNISSEURS" ADD CONSTRAINT "FK_FOUR" FOREIGN KEY ("IDP")
	  REFERENCES "MALAK"."PRODUIT" ("ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table JOUEURS
--------------------------------------------------------

  ALTER TABLE "MALAK"."JOUEURS" ADD CONSTRAINT "FKC" FOREIGN KEY ("IDC")
	  REFERENCES "MALAK"."CATEGORIES" ("ID") ENABLE;
  ALTER TABLE "MALAK"."JOUEURS" ADD CONSTRAINT "FKS" FOREIGN KEY ("IDS")
	  REFERENCES "MALAK"."SPORT" ("ID") ENABLE;
--------------------------------------------------------
--  Ref Constraints for Table SPONSOR
--------------------------------------------------------

  ALTER TABLE "MALAK"."SPONSOR" ADD CONSTRAINT "FK" FOREIGN KEY ("IDE")
	  REFERENCES "MALAK"."EVENT" ("ID") ENABLE;