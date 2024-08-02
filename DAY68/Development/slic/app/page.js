import Image from "next/image";

export default function Home() {
  return (
    <div className="container my-10 size-80 bg-red-950 relative">
      <Image className="mx-auto object-contain" fill={true} src="https://img-cdn.pixlr.com/image-generator/history/65bb506dcb310754719cf81f/ede935de-1138-4f66-8ed7-44bd16efc709/medium.webp" alt="" />
    </div>
  );
}
